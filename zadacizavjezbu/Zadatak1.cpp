#include <iostream>
#include <vector>
#include<stdlib.h>
#include <ctime>
using namespace std;
/* 
Rekurzivne funkcije 
Zadatak 1: Minimum i maksimum od n slucajnih brojeva. Napisati funkcije za minimum i maksimum dva broja,
kao i rekurzivnu funkciju void slucajni.
*/





void slucajni(int niz[ ], int x){
	srand(time(NULL));
	rand();
	niz[x];
	cout<<"\nNiz od "<<x<<" slucajnih brojeva je: ";
		for (int i=0; i<x; i++){
			niz[i]=rand()%100;
			cout<<niz[i]<<" ";
		}
}


int nadjinajmanji(int A[], int n){
	if (n==1){
		return A[0];
	}
	
	return min(A[n-1], nadjinajmanji(A, n-1));
}

int nadjinajveci(int A[], int n){
	if (n==1){
		return A[0];
	}
	
	return max(A[n-1], nadjinajveci(A, n-1));
}


int main(){
	
	int n;
	cout<<"Unesite velicinu niza: ";
	cin>>n;
	int niz[n];
	slucajni (niz, n);
	cout<<endl;
	cout<<"Najmanji element niza je: "<<nadjinajmanji(niz, n)<<endl;
	cout<<"Najveci element niza je: "<<nadjinajveci(niz, n);
	
	return 0;
}
