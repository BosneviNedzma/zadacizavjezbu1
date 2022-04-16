/* 
Zadaca 4

Zadatak 4: Napisati funkciju koja obrce proizvoljan string (kel_okreni) koji joj se prenese kao parametar.
Obavezno je korištenje funkcija iz prethodna dva zadatka. Testirati je u programu. Funkcija
treba da ima oblik:

void kel_okreni(char *okst);

*/

#include <iostream>
using namespace std;

void kel_swap(char *a, char *b){//funkcija je objasnjena u zadatku br.2
	char temp = *b;
	*b=*a;
	*a=temp;
}

unsigned kel_strlen(char *str){ //funkcija je objasnjena u zadatku br.3
	int br=0;
	while(*str != 0){
		str++;
		br++;
	}
	return br;
}

void kel_okreni(char *okst){ //ulazni parametar je pokazivac
	int duzina=kel_strlen(okst); //za odreðivanje vrijednosti ove varijable koristimo funkciju kel_strlen
	int temp=duzina; //radi manipulacije, dodajemo novu varijablu
	for(int i=0; i<duzina/2; i++){ //petlja se krece do polovine recenice
		if(okst[i]=='\0' || okst[temp-1]=='\0'){ //ukoliko naidjemo na prazan prostor, nastavit cemo sa programom, odnosno prelazimo na dalji uslov, else
			continue;
		}else{
			kel_swap(&okst[i], &okst[temp-1]);//mijenjamo znakove koji se nalaze na istim rednim pozicijama gledajuci lijevu i desnu stranu
		}
		temp--; //kada budu zadovoljeni prethodni uvjeti, temp varijabla se smanjuje za jedan, time se primice prema sredni recenice
	}
}

int main(){
	
	char str[100];
	cout<<"Unesite recenicu: ";
	cin.getline(str,100);
	cout<<"Unesena recenica: "<<str<<endl;
	kel_okreni(str);
	cout<<"Recenica nakon izmjene: "<<str<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
