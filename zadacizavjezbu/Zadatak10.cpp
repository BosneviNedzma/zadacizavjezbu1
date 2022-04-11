/*
Rekurzivne funkcije

Zadatak 10: Napisati rekurzivnu funkciju koja prevodi prirodan broj N iz dekadnog u binarni brojni sistem.
*/

#include <iostream>

using namespace std;

int dekadni_u_binarni(int n){
      if(n == 0){ //ako je n 0, zavrsit ce se program
      	return 0;
	  }else{
	  	return n%2+10*(dekadni_u_binarni(n/2)); 
	  	
	  }

}




int main(){
	
	int n;
	cout<<"Konverzija dekadog u binarni. "<<endl;
	cout<<"Unesite dekadni broj: ";
	cin>>n;
	
	cout<<"Binarni broj je: "<<dekadni_u_binarni(n);
	
	
	
	
	
	
	
	
	
	return 0;
}
