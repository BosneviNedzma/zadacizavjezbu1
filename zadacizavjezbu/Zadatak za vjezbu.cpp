/*
 Rekurzivne funkcije

Zadatak za vjezbu: Ispisati sve prirodne brojeve manje od N koji su jednaki sumi kvadrata dvostrukih
faktorijela svojih cifara.
*/
#include <iostream> //biblioteka 
#include <cmath> //biblioteka u kojoj se nalazo funkcija za stepenovanje (pow)
using namespace std;

int faktorijel(int a){
	
	if(a == 1 || a == 0){ 
		return 1;
	                    }else {
		return a*faktorijel(a-1); //rekurzivna funkcija koja se obavlja sve dok ne doðe do krajnjeg uslova, krajnji uslov je zadan u if dijelu
	                          }
                     }

bool provjera(int broj)
{
    int a, b, c;
    c = broj % 10;
    b = (broj / 10) % 10;
    a = (broj / 100) % 10;
     

    return broj == pow((2*faktorijel(a)),2) + pow((2*faktorijel(b)),2) + pow((2*faktorijel(c)),2);
}



int suma = 0;
bool provjera (int broj){
	
	 while(broj/10 != 0){
	 	 int s= broj%10;
	 	 int m = faktorijel(s);
	 	 int x=2*m;
	 	 suma += pow(x, 2);
        broj /= 10;
    }
    
    if (broj == suma){
    	return true;
	}else {
		return false;
	}
}


int main(){
	
int n;

do{
cout<<"Unesite neki broj: ";
cin>>n;	
}while (n<0 || n>1000);

cout<<"Prirodni brojevi manji od "<<n<<" koji su jednaki sumi kvadrata dvostrukih faktorijela svojih cifara su: ";
for (int i=1; i<n; i++){
	if(provjera(i)){
		cout<<i<<" ";
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
