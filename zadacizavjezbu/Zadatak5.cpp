/*
 Rekurzivne funkcije

Zadatak 5: Ispitati da li je uneti broj N prost koristeci rekurzivnu funkciju prost. Pronaci sve brojeve-blizance
do zadatog broja n. Dva broja su blizanci ako su prosti i razlikuju se za 2.
*/

#include <iostream>
using namespace std;

bool prost(int a){
	
	for (int i=2; i<a/2; i++){ //Zbog odredjivanja prostog broja, for petlju krecemo od 2 do polovine datog broja. Po definiciji, prost broj je onaj koji je djeljiv sa jedan i sa samim sobom, 
	                            //u slucaju da je djeljiv sa jos nekim brojem koji dolazi do njegove polovine, znaci da broj nije prost, jer ne ispunjava uslov iz definicije.
		if (a%i == 0){
			return false; //ako je djeljiv sa nekim broj od 2 do polovine sebe samog, znaci da nije prost
		}
	}
	return true;	//ukoliko nije ispunio uslov iz petlje, znaci da broj nije prost
}

int blizanci(int n){
	for (int i=3 ; i <= n-2; i+=2)  //uvodimo novu petlju koja broji od broja 3 do n-2, i broj prilikom ponovnog ulaska u petlju povecava za 2
if (prost(i) && prost(i+2)){ //u petlju postavljamo uslov, koji je ispunjen ako je broj prost kao i za 2 od njega veci broj
	cout<<i<<" i "<<i+2<<endl; //ako je uslov zadovoljen, ispisat ce se oba broja sa veznikom 'i' izmedju njih
	}
}

int main() {
	
	int n;
	cout<<"Unesite broj: ";
	cin>>n;
	if(prost(n)){
		cout<<"Uneseni broj je prost."<<endl;
	}else{
		cout<<"Uneseni broj nije prost."<<endl;
	}
	cout<<"Blizanci su: "<<endl;
	
blizanci(n);
  
   return 0;
}

