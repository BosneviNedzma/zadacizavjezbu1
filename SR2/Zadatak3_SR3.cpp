/*
Napišite program kojim se s tastature unose imena, sve dok se ne upiše "kraj“. Kada se
završi unos treba izvršiti ispis imena obrnutim redoslijedom u odnosu na red unošenja
s tastature, odnosno prvo treba ispisati ime koje je posljednje uneseno.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

struct Imena{
string ime;
};

int main(){
	
Imena ime[50];
int i=0;
do{
	cout<<"Unesite ime: ";
	cin>>ime[i].ime;
	if (ime[i].ime == "kraj" || ime[i].ime== "Kraj" || ime[i].ime== "KRAJ"){
		break;
	}
	i++;
}while(1);
	
	if(i==0){
		cout<<"Niz je prazan."<<endl;
	}else{
		cout<<"Imena u obrnutom redoslijedu u odnosu na red unosa su: "<<endl;
		for(int j=i-1; j>=0; j--){
			cout<<ime[j].ime<<endl;
		}
	}
	
	return 0;
}
