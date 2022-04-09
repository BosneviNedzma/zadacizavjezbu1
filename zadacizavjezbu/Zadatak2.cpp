/*
 Rekurzivne funkcije

Zadatak 2: Ispisati sve trocifrene brojeve koji su jednaki sumi faktorijela svojih cifara.
*/
#include <iostream>
using namespace std;

int faktorijel(int a){
	
	if(a == 1 || a == 0){ 
		return 1;
	                    }else {
		return a*faktorijel(a-1); //rekurzivna funkcija koja se obavlja sve dok ne doðe do krajnjeg uslova, krajnji uslov je zadan u if dijelu
	                          }
                     }

bool provjera (int broj){
	int a,b,c;
	c = broj%10; //uzimamo jedinicu od trocifrenog broja
	b = (broj/10)%10;  //uzimamo deseticu od trocifrenog broja
	a = (broj/100)%10;   // uzimamo deseticu od trocifrenog broja
	if (broj == faktorijel(a) + faktorijel(b) + faktorijel(c)){ //ako je uneseni broj jednak zbiru faktorijela stotice, desetice i jedinice, bool ce biti tacan
    return true;
	}else{     
		return false;   //u suprotnom netacno
	}
}

int main(){
	
	int br = 0;  //br je oznaka za brojac
	
	
for (int i=100; i<1000; i++){ //posto je u zadatku naglaseno da su trocifreni brojevi, for petlju postavljamo od 100 do 1000
	if (provjera(i)){  // ako je uslov iz funkcije bool ispunjen za neki trocifreni broj, brojac ce se povecati  
		br++; 
	                }
                            }	

//nastavak je dodan radi ljepseg ispisa

if (br<2){ //ako je brojac manji od nule
	if (br ==0){ // i ako je brojac postavljen na nulu, jos uvijek
		cout<<"Nema brojeva koji zadovoljavaju uslov!";  //ispisat ce se ova recenica
	}else { //ako nije na nuli, a ako je manji od 2, a nije 0, preostaje da je 1
	    cout<<"Broj koji ispunjava ovaj uslov je: "; //ispisat ce se ova recenica
		for (int i=100; i<1000; i++){ //zatim ulazimo u petlju i ispisemo broj koji zadovoljava uslov iz funkcije bool
	    if (provjera(i)){
		cout<<i<<endl;
	}
                                    }  	
          } 
         }else {   // u slucaju da je brojac veci od 2, ulazimo u novu petlju i ispisujemo sve brojeve koji zadovoljavaju  uslov iz funkcije bool
         	cout<<"Brojevi koji zadovoljavaju dati uslov su: ";
         	for (int i=100; i<1000; i++){
                	if (provjera(i)){
		            cout<<i<<" ";
	                                  }         
                                          }
		        }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
