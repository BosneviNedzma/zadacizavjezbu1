/*
Rekurzivne funkcije
Zadatak 8: Odrediti sumu i broj cifara nekog prirodnog broja N, koji se uèitava sa tastature. Koristiti rekurziju.
*/

#include <iostream>
using namespace std;

int suma(int x){
int temp = x; //uvodimo novu varijablu kojoj dodjeljujemo vrijednost od varijbale koja je unesena
int suma = 0;  // sumu postavljamo na nula
if (temp == 0){ //ako je temp jednaka nuli, onda se porgram zavrsava
	return 0;
}else{ //u slucaju da varijabla nije jednaka nuli, ulazimo o ovaj uslov
	while(temp %10 != 0){  //dok je modul od temp varijable razlicit od nule, ponavljat ce se:
	suma += temp%10;  //sumi dodajemo vrijednost modula 10 vrijednosti temp
	temp /= 10;  //nakon toga, broj dijelimo sa 10, kako bismo mogli proci kroz sve cifre 
     //kada modul od 10 bude jednak nuli, odnosno kad program iizadje iz petlje, izlazna vrijednost ce biti jednaka sumi cifara
	}  
return suma;	
}}

int brojCifara(int x){
	int temp = x; //uvodimo novu varijablu kojoj dodjeljujemo vrijednost od varijbale koja je unesena
	int br = 0;   // postavljamo brojac na nula
	if(temp == 0){ //kada je temp varijabla jednaka nuli, program ce zavrsiti sa radom
		return 0;
	             }else{ //u suprotnom
	while(temp %10 != 0){  //ulazimo u pelju, koja ce se ponavljati sve dok modul od 10 vrijednosti varijable temp bude razlicit od nule
	br++;  //ukoliko je pocetni usloc ispunjen, brojac ce se uvecati za 1
	temp /= 10; //zatim se cifra, koja je bila uslov za petlju, odstranjuje
                            }
return br;	 //izlazna vrijednost je vrijednost brojaca
	                   }
                      }


int main(){
	
	int x;
	cout<<"Unesite neki broj: ";
	cin>>x;
	cout<<"Suma cifara: "<<suma(x)<<endl;
	cout<<"Cifara broj "<<x<<" ima: "<<brojCifara(x)<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
