
/*

Zadaci za samostalan rad 3: Zadatak 2
Upisati ime i prezime ucenika te broj opravdanih i neopravdanih sati. Ispisati ime,
prezime, broj opravdanih i neopravdanih sati te ukupan broj izostanaka!
*/


#include <iostream>

using namespace std;

struct Ucenik{
	char ime[15];
	char prezime[15];
	int brojOpravdanih;
	int brojNeopravdanih;
};

int main(){
	
	int n;
	cout<<"Unesite broj studenata: ";
	cin>>n;
	
     Ucenik ucenici[n];
	
	for (int i=0; i<n; i++){
		cout<<"Podaci o "<<i+1<<". osobi:\n";
		cout<<"Ime: ";
		cin>>ucenici[i].ime;
		cout<<"Prezime: ";
		cin>>ucenici[i].prezime;
		cout<<"Broj opravdanih: ";
		cin>>ucenici[i].brojOpravdanih;
		cout<<"Broj neopravdanih: ";
		cin>>ucenici[i].brojNeopravdanih;
	}
	
	cout<<"\nPodaci o ucenicima: \n";
	for (int i=0; i<n; i++){
		cout<<"Ucenik po rednim brojem "<<i+1<<". se zove:"<<ucenici[i].ime<<" "<<ucenici[i].prezime
		<<". Ima "<<ucenici[i].brojOpravdanih<<" opravdanih casova i "<<ucenici[i].brojNeopravdanih<<" neopravdanih casova. Što je ukupno "<<
		(ucenici[i].brojNeopravdanih+ucenici[i].brojOpravdanih)<<" izostanaka. \n"<<endl;
	}
	
	return 0;
}
