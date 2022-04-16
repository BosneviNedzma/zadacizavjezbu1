/*
Napraviti program za evidenciju studenata na Politehnièkom fakultetu. Potrebna su
dva niza struktura od kojih æe jedan sadržavati podatke o studentima (max 100
elemenata), a drugi podatke o ocjenama studenata (max 1000 elemenata). Izgled
struktura je:

struct student{
char ime[20];
char prezime [30];
int index;
};
struct ocjena{
int indeks;
int br_predmeta;
int ocjena;
};

U programu treba omoguæiti:
1. Unos studenta (sprjeciti unos duplog indeksa)
2. Ispis svih studenata
3. Ispis jednog studenta i svih predmeta i ocjena koje je taj student dobio na osnovu
unesenog broja indeksa, te prosjek studenta
4. Ispis svih studenata koji iz nekog predmeta imaju ocjenu veæu od neke zadane ocjene.
Korisnik unosi putem tastature predmet i željenu minimalnu ocjenu.
*/

#include <iostream>
#include <string>
using namespace std;

int brStudenata;
struct Student{
	char ime[20];
	char prezime[30];
	int index;
};

struct Ocjena{
	int index;
	char nazivPredmeta[50];
	int ocjena;
};

Ocjena ispisVecihOcjena(Ocjena ocjena[], int n, Student studenti[]) {
	cout<<"Unesite predmet koji zelite: ";
	char predmet[50];
	cin.ignore();
	cin.getline(predmet, 50); //jer korisitmo char kao vrstu varijable, a da bi u memoriju smjestili svi podaci o korisniku, koristim cin.getline
	string p1=predmet;
	string p2;
	cout<<"Unesite najmanju ocjenu: ";
	int ocjenaa;
	cin>>ocjenaa;
	for (int i=0; i<n; i++){
		p2=ocjena[i].nazivPredmeta;
		if(p2==p1 && ocjena[i].ocjena>ocjenaa){
			cout<<"Ime studenta: "<<studenti[i].ime<<endl;
			cout<<"Prezime studenta: "<<studenti[i].ime<<endl;
			cout<<"Ocjena iz "<<predmet<<" je: "<<ocjena[i].ocjena<<endl;
			
		}
	}
}

Student unosStudenata(Student studenti[], int& n, Ocjena ocjene[]){
	int m=n;
	n++;
	for(int i=m; i<m; i++){
		cout<<"Unesite ime studenta: ";
		cin>>studenti[i].ime;
		cout<<"Unesite prezime studenta: ";
		cin>>studenti[i].prezime;
		cout<<"Unesite broj indexa: ";
		cin>>studenti[i].index;
		for(int j=0; j<i; j++){
			if(studenti[j].index==studenti[i].index){
				cout<<"Broj indexa vec postoji, unesite novi: ";
				cin>>studenti[i].index;
				j=-1;
			}
		}
		cout<<endl;
		ocjene[i].index=studenti[i].index;
		cin.ignore();
		cout<<"Unesite naziv predmeta: ";
		cin.getline(ocjene[i].nazivPredmeta, 50);
		do{
			cout<<"Unesite ocjenu: ";
			cin>>ocjene[i].ocjena;  //petlja se ponavlja ukoliko ne bude zadovoljen uslov, to jest ako je uneseni broj manji od 6 ili veci od 10
		}while(ocjene[i].ocjena<6 || ocjene[i].ocjena>10);
			}
}

Student ispisStudenata (Student studenti[], int n){
	cout<<endl<<"Informacije o studentima: "<<endl;
	for(int i=0; i<n; i++){
		cout<<"Ime: "<<studenti[i].ime<<endl;
		cout<<"Prezime: "<<studenti[i].prezime<<endl;
		cout<<"Broj indexa: "<<studenti[i].index<<endl;
	}
}

Student info(Student studenti[], int n, Ocjena ocjene[]){
	int index;
	cout<<"Unesite broj inedexa: ";
	cin>>index;
	int br=0;
	for(int i=0; i<n; i++){
		if(studenti[i].index==index){
			cout<<"Ime studenta: "<<studenti[i].ime<<endl;
			cout<<"Prezime studenta: "<<studenti[i].prezime<<endl;
			cout<<"Predmet iz kojeg student ima ocjenu: "<<ocjene[i].nazivPredmeta<<endl;
			cout<<"Ocjena: "<<ocjene[i].ocjena<<endl;
			br++;
		}
	}
	if(br==0){
		cout<<"Student ne postoji."<<endl;
	}
}


int main(){
	
	int opcija;
	Student studenti[50];
	brStudenata=0;
	Ocjena ocjene[1000];
	do{  //petlja se ponavlja sve dok korisnik ne unese nulu
		cout<<"0 Kraj"<<endl;
		cout<<"1. Unos studenata"<<endl;
		cout<<"2. Ispis studenata"<<endl;
		cout<<"3. Info o studentu"<<endl;
		cout<<"4. ocjene vece od unesene"<<endl;
	    cout<<"\nIzaberite opciju: ";
	    cin>>korak;
	    if(opcija==0){ 
	    	cout<<"Kraj programa"<<endl;
		}
		if(opcija == 1){ //ukoliko korisnik unese 1, pozvat ce se funkcija za unos informacija o studentu
			unosStudenata(studenti, brStudenata, ocjene);
		}
		if(opcija == 2){ //ukoliko korisnik unese 2, pozvat ce se funkcija za ispis informacija o studentu
			ispisStudenata(studenti, brStudenata);
		}
		if(opcija == 3){//ukoliko korisnik unese 3, pozvat ce se funkcija za unos detaljnijih informacija o studentu
			info(studenti, brStudenata, ocjene);
		}
		if(opcija == 4){ //ukoliko izabere 4 opciju, izlistat ce mu se vece ocjene od one koju je unio
			ispisVecihOcjena(ocjene, brStudenata, studenti);
		}
	}while(opcija != 0);
	
	return 0;
}
