
/*
Unijeti broj studenata, te podatke o studentima: ime, prezime, godina, prosjek. Ispisati
studenta sa najveæim prosjekom.
*/


#include <iostream>
#include <vector>
using namespace std;

struct Student{
 char ime[20];
 char prezime[40];
 int godina;
 float prosjek;
};

int main(){
	
	int n;
	cout<<"Unesite broj studenata: ";
	cin>>n;
	
     Student studenti[n];
	
	for (int i=0; i<n; i++){
		cout<<"Podaci o "<<i+1<<". osobi:\n";
		cout<<"Ime: ";
		cin>>studenti[i].ime;
		cout<<"Prezime: ";
		cin>>studenti[i].prezime;
		cout<<"Godina: ";
		cin>>studenti[i].godina;
		cout<<"Prosjek: ";
		cin>>studenti[i].prosjek;
	}
	
	int najveci = 0;
	int imeOsobe = 0;
	for (int i=0; i<n; i++){
		if(studenti[i].prosjek>najveci){
			najveci = studenti[i].prosjek;
			imeOsobe = i;
		}
		cout<<endl;
	}
	
	cout<<"Osoba sa najvecim prosjekom je: "<<studenti[imeOsobe].ime<<" "<<studenti[imeOsobe].prezime<<"; "<<studenti[imeOsobe].godina<<" godina; prosjek:  "<<studenti[imeOsobe].prosjek;
	
	
	return 0;
}
