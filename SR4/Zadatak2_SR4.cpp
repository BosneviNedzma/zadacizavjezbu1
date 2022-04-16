/*

Zadaca 4

Zadatak 2: 

Napisati funkciju koja zamjenjuje vrijednosti dvije promjenljive tipa char. Ime funkcije treba
da bude kel_swap. Funkicja kao parametre prima pokazivaèe na promjenljive èije vrijednosti
zamjenjuje. Funkcija treba da ima oblik:

void kel_swap(char *a, char *b);


*/

#include <iostream>

using namespace std;

void kel_swap(char *a, char *b){
	char temp;
	temp = *a;
	*a=*b;
	*b=temp;
}



int main(){
	
	char vrijednost1 = 131;
	char vrijednost2 = 157;
	cout<<"Prije zamjene: "<<endl;
	cout<<"varijabla 1 = "<<vrijednost1<<endl;
	cout<<"varijabla 2 = "<<vrijednost2<<endl;
	
	kel_swap(&vrijednost1, &vrijednost2);
	
    cout<<"\nPoslije zamjene: "<<endl;
	cout<<"varijabla 1 = "<<vrijednost1<<endl;
	cout<<"varijabla 2 = "<<vrijednost2<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
