/*
Zadaca 4

Zadatak 5: Napisati funkciju koja odreðuje srednju vrijednost niza realnih brojeva tipa double. Vraceni
rezultat treba da je tipa double. Broj elemenata niza prenosi se kao parametar funkcije. Svaki
element niza treba zamjeniti razlikom u odnosu na srednju vrijednost. Testirati funkciju u
odgovarajucem programu gde korisnik može da unese odreðen broj elemenata preko
terminala. Postoji ogranicenje od maksimalno 20 brojeva, s tim što korisnik može izabrati da
unese manje. Funkcija treba da ima oblik:

double srv_niza(double num[], int n);
*/

#include <iostream>
using namespace std;

void unos(double niz[], int n){ //funkcija za unos niza, ulazni parametri su naziv niza i njegova velicina, sto su glavni uslovi za formiranje petlje
	for (int i=0; i<n; i++){
		cout<<"Unesite "<<i+1<<". clan niza: ";
		cin>>niz[i];
	}
}

void ispis(double niz[], int n){ //funkcija za ispis clanova vec formiranog niza
	for(int i=0; i<n; i++){
		cout<<i+1<<". clan niza: "<<niz[i]<<endl;
	}
}

double srv_niza(double num[], int n){//funkcija za izracun srednje vrijednosti
	int suma=0;  //nova varijabla za sumu, postavljamo je na vrijednost 0, jer u slucaju da se na tom mjestu u memorijskoj lokaciji nalazi druga vrijednost od ranije, imali bismo pogresan izracun
	double sv; //uvodimo novu varijablu za srednju vrijednost=sv
	for(int i=0; i<n; i++){ //petlja krece od 0 do broja clanova niza
		suma += num[i]; //svaki clan niza se dodaje u sumu
	}
	return sv=suma/n; //nakon cega se suma dijeli sa broje clanova i time smo dobili srednju vrijednost
}

void promjena (double *niz, int n, double sv){ //funkcija za izmjenu clanova niza
	for(int i=0; i<n; i++){ //prema tekstu zadatka, svaki clan niza treba biti oduzet sa srednjoj vrijednoscu cjelokupnog niza
		niz[i]=niz[i]-sv; 
	}
}

int main(){
	
int brClanova;
double sv;
do{
	cout<<"Unesite broj clanova niza do 20: ";
	cin>>brClanova;
}while(brClanova<1 || brClanova>20);	//uvodimo petlju koja kaze da nije moguc prelazak u drugi dio zadatka dok se ne unese broj izmedju 1 i 20
	
	double niz[brClanova];
	unos(niz, brClanova); //pozivamo funkciju za unos
	cout<<"Niz prije izmjene clanove: "<<endl;
	ispis(niz, brClanova); //pozivamo funkciju za ispis
	sv=srv_niza(niz, brClanova); //varijabli sv dodjeljujemo vrijednost dobijenu iz funkcije za srednju vrijednost
	cout<<"Srednja vrijednost niza iznosi: "<<sv<<endl;
	promjena(niz, brClanova, sv); //pozivamo funkciju koja ce svakog clana umanjiti za srednju vrijednost cjelokupnog zbira
	cout<<"\nNiz nakon izmjene clanova: "<<endl;
	ispis(niz, brClanova); //ponovo pozivamo funkciju za ispis, kako bi korisnik uocio promjene
	
	
	
	
	
	
	return 0;
}
