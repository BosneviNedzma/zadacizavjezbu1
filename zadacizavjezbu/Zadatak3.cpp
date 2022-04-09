/*
 Rekurzivne funkcije

Zadatak 3: Napisati rekurzivnu funkciju za izracunavanje NZD-a dva broja. Unositi prirodne brojeve dok se ne
unese vrednost <=0. Izracunati NZD unetih brojeva.
*/
#include <iostream>
#include <vector>
using namespace std;
//rekurzivna funkcija za izracunavanje NZD-a
int nzd(int a, int b){
	if (b == 0){ //ako je drugo broj jednak nuli, rezultat je broj na poziciji a
		return a;
	}else {
		return nzd (b, a%b); //u suprotnom, najmanji zajednicki sadrzilac je onaj broj kad uradimo modul od brojeva na prvoj i drugoj poziciji sve dok ne dobijemo da je broj na drugoj poziciji 0, necemo dobiti rezultat
	}
}

int main(){
	vector<int>A; //uvodimo vektor, zbog toga smo morali ukljuciti biblioteku '#include<vector>'
int a,b;
do{
	cout<<"Unesite prvi broj: ";
	cin>>a;
	cout<<"Unesite drugi broj: ";
	cin>>b;
	A.push_back(nzd(a,b)); //zbog toga sto je u zadatku navedeno da se nzd ispisuje tek poslije unosa nula, nzd prosljeðujemo u vektor
}while (a > 0  || b > 0); //unosimo brojeve sve dok je ili a ili b veci od 0
	
	cout<<"NZD za unesene brojeve je: ";
	cout<<endl; //komanda za prazan red
	for (int i=0; i<A.size(); i++){  //nakon sto je su unesene jedinice, pravimo for petlju koja ce nam ispisati nzd za unesene parove brojeva; petlja krece od nule do krajnje cifre u velicini vektora
		cout<<A[i]<<" "<<endl;       //izabrala sam upotrebu vektora jer je skalabilniji u odnosu na niz 
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
