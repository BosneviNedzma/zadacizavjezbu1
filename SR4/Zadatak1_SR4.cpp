/*

Zadaca 4

Zadatak 1: Napraviti funkciju sa sljedecim prototipom:

int ispravna(char *adresa)

Funkcija vraca vrijednost 1 ako primljeni string predstavlja ispravnu email adresu iz Bosne i
Hercegovine, a u suprotnom vraca 0. Radi jednostavnosti, primijenite sljedece testove:
• u stringu se nalazi tacno jedan znak @
• posljednja tri karaktera stringa su ".ba"
Ukoliko jedan od testova nije zadovoljen, funkcija vraca 0.
U svim zadacima traži se da se napiše funkcija koja obavlja nekakav proracun ili obradu. Treba
ih testirati pozivanjem iz glavne funkcije (main) u kojoj se direktnom inicijalizacijom ili
unosom preko terminala mogu unijeti test vrijednosti odgovarajuæeg tipa nakon cega se poziva
napisana funkcija i po potrebi se ispisuje se njen rezultat.


*/

#include <iostream>
#include <cstring>
using namespace std;

// adresa je validna ukoliko se zavrsava na ".ba" i ukoliko ima tacno jedan karakter '@', prateci ove definicije "@.ba" je validna adresa
// "@@.ba" nije validna adresa jer ima 2 '@'

bool ludoA(char* adresa, int& i) {
	int ludoA = 0;
	for (i; i > -1; i--) {
		if (*(adresa + i) == '@') {
			ludoA++;
	}
	return ludoA == 1;
}}

int ispravna(char* adresa) {
	int i = 0;
	for (i; i < 50; i++) {
		if (*(adresa + i) == 0)	{
			break;
		}
	}

	int a = strlen(adresa);

	if (*(adresa + --i) != 'a' || *(adresa + --i) != 'b' || *(adresa + --i) != '.') {
		return 0;
	}

	if (!ludoA(adresa, i)) {
		return 0;
	}
	return 1;
}

int main () {
	char email[50];	
	char* ptr;

	cout << "\n\n\n\tUnesite email adresu:\n\n\t\t";
	cin >> email;

	ptr = email;

	cout << "\n\n\tUnesena email adresa " << (ispravna(ptr) ? "je " : "nije ") << "validna\n\n\n\n";
	return 0;
}



