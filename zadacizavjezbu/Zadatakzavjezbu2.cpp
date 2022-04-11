/*
Rekurzivne funkcije

Zadatak 10:Napisati rekurzivnu funkciju koja prevodi prirodan broj N iz dekadnog u binarni brojni sistem.

*/

#include <iostream>

using namespace std;



int f2 (int n) { // rekurzivna funkcija za ispisivanje cifara u obrnutom redoslijedu
    if (n < 10){
        cout << n;
    } else {
        cout << n%10;            
        f2 (n/10);
    }
}

bool palindrom(int n){

     if (n>1000 || n<100000){
     	int a,b,c,d,e;
     	e=n%10;
     	d=n/10%10;
     	c=n/100%10;
     	b=n/1000%10;
     	a=n/10000;
     	if(a==e && b==d){
     		return true;
		 }
		 else{
		 	return false;
		 }
	 }

}

int main () {
	
    int num; // deklarisemo varijablu num tipa int
    cout << "Molimo vas da unesete cijeli broj: ";  // objasnjenje sta se trazi za unos
    cin >> num; // unosimo vrijednost same varijable num

     
    cout << endl; // uredjivanje ispisa
    
    cout << "Cifre unesnog broja obrnuto: "; // objasnjenje sta ce se ispisati
    f2 (num); // pozivamo funkciju f2
    cout<<endl;
    
  cout<<"Palindrom: "<<palindrom(num);

    return 0;
}
