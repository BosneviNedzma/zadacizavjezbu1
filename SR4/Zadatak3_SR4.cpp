/*
Napisati funkciju koja odreğuje duinu stringa. Ime funkcije treba da bude kel_strlen. Funkcija
treba da ima oblik:

unsigned kel_strlen(char *str);
*/

#include <iostream>
using namespace std;

unsigned kel_strlen(char *str){
	int br=0;
	int i=0;
	while(*str != 0){
		str++;
		br++;
	}
	return br;
}

int main(){
	
	int duzina;
	char str[100];
	cin.getline(str, 1000);
	cout<<"Duzina stringa iznosi: "<<kel_strlen(str)<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
