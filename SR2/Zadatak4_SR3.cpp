/*
Napisati funkciju koja kao argument uzima znakovno polje jmbg (jedinstveni maticni
broj gradjanina) a kao izlaz vraca strukturnu varijablu koja predstavlja datum rodjenja
doticne osobe. Nakon poziva funkcije fdatum() ispisuje datum rodjeja osobe sa
doticnim jedinstvenim maticnim brojem.
*/

#include <iostream>
using namespace std;

// Struktura datum
struct datum {
	int dan;
	int mjesec;
	int godina;
};

struct datum fdatum(char* jmbg) {
	datum Datum;

	char dan[2];
	char mjesec[2];
	char godina[3];

	// Na pointeru jmbg je spasena prva memorijska adresa char niza, prvi put kada ukucamo *(jmbg++), to je prva memorijska adresa,
	// ++ povecava taj pointer, nakon cega on pokazuje na drugu memorijsku adresu
	// rezultat ovoga jeste da na dan spremimo prva dva chara, na mjesec treci i cetvrti, a sljedeca 3 na godinu
	dan[0] = *(jmbg++);
	dan[1] = *(jmbg++);

	mjesec[0] = *(jmbg++);
	mjesec[1] = *(jmbg++);

	godina[0] = *(jmbg++);
	godina[1] = *(jmbg++);
	godina[2] = *(jmbg);

	// atoi je konverzija chara u integer
	Datum.dan = atoi(dan);
	Datum.mjesec = atoi(mjesec);
	Datum.godina = atoi(godina);

	// Ukoliko je osoba rodjena 2000te ili kasnije, zadnja 3 broja su 000-020, tako da u tim situacijama dodajemo 2000 da dobijemo
	// godinu rodjenja.
	if (Datum.godina < 100) {
		Datum.godina += 2000;
	}
	else {
		// U suprotnom je rodjenja 1999 ili ranije, tako da dodajemo 1000 na godinu rodjenja.
		Datum.godina += 1000;
	}

	// Vracamo instancu Datum strukture datum.
	return Datum;
}

int main () {
	// Char niz velicine 14 za jmbg, 13 je velicina jmbg-a, a 14.ti element daje kompajleru prostora da oznaci kraj niza.
	char jmbg[14];
	
	std::cout << "\n\n\tMolim unesite JMBG:\n\t\t";

	std::cin >> jmbg;
	

	// Char pokazivac koji pokazuje na prvu memorijsku lokaciju char niza jmbg.
	char* ptr = jmbg;

	// Povratnu vrijednost funkcije fdatum spasavamo u instancu Datum.
	datum Datum = fdatum(ptr);

	// Ispisujemo dan, mjesec, i godinu rodjenja iz instance Datum.
	cout << "\n\n\tDatum rodjenja unesene osobe: ";
	cout << "\n\t\tDan: " << Datum.dan;
	cout << "\n\t\tMjesec: " << Datum.mjesec;
	cout << "\n\t\tGodina: " << Datum.godina;

	cout << "\n\n\n";
}


