/*
 Rekurzivne funkcije

Zadatak 4: Napisati rekurzivnu funkciju kojom se izracunava najmanji zajednicki sadržalac dva prirodna broja
tako što se maksimumu dva broja dodaje 1 u svakom rekurzivnom pozivu.
*/
#include <iostream>
#include <vector>
using namespace std;


int nzs(int a, int b){ //rekurzivna funkcija za odredjivanje nzs
	int veci = 0; //uvodimo varijablu veci, u koju cemo smjestiti vecu varijablu od dvije unesene, pri tome, ne remeteci njihove vrijednosti
	if (a>b){ //ako je a veca od b
		veci = a; //vecoj ce biti dodijeljena vrijednost od a
	}else{ //u suprotnom, vrijedni i za situaciju kada je b vece od a, ili kad su obje vrijednosti jednake
		veci = b; //vecoj ce biti dodijeljena vrijednost od b;
	}
	do{ //uvodimo do-while petlju koja ce biti aktivna dok se ne pokrene naredba break, odnosno, dok se ne ispuni zadani uslov
		if(veci % a == 0 && veci % b == 0){ //posto je u gornjem koraku varijavla 'veci' poprimila vrijednost vece vrijednosti, ulazimo u uslov koji kaze ako modul a i veceg i b i veceg bude ispunjen, vratit ce se veci
			return veci;
			break;  // u tom slucaju ce doci do prekida petlje
		}
		veci++; //u slucaju da if uslov ne bude ispunjen, veci ce se povecati za 1, sve dok se ne postigne zadani uslov;
	}while(true);
	
}



int main(){
	
	int a,b;
	cout<<"Unesite dva broja: ";
	cin>>a>>b;
	
	cout<<"NZS ("<<a<<","<<b<<"): "<<nzs(a,b)<<endl;

	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
