/*
 Rekurzivne funkcije

Zadatak 6: Za paran broj N proveriti hipotezu Goldbaha koristenjem rekurzije. Prema toj hipotezi,
svaki paran broj veci od 2 moze se predstaviti zbirom dva prosta broja.
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



int main() {
	
int a;
do{
cout<<"Unesite neki broj: ";
cin>>a;	
}while (a%2==1);
for (int i=0; i<a; i++){
	if(prost(i) + prost(a-i) == a){
		cout<<prost(i)<<" "<<prost(a-i)<<" = "<<a<<endl;
	}
}

   return 0;
}

