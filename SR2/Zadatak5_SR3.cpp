
/*
Napisati funkcije:
- brojpoz(), koja racuna broj pozitivnih clanova niza,
- proizvod(), koja racuna proizvod svih clanova niza,
- zbirparnih(), koja racuna zbir svih parnih clanova,
- brojnula(), koja racuna broj clanova jednakih nuli,
- brojneg(), koja racuna broj negativnih clanova,
- prosek(), koja racuna srednju vrijednost niza.
U glavnoj funkciji se unosi prirodan broj, zatim niz od n cijelih brojeva i štampaju
rezultati funkcije.
*/
#include <iostream>
using namespace std;

int brojpoz(int arr[], int n) {
	int brojac = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] > 0)
			brojac++;
	return brojac;
}

int proizvod(int arr[], int n) {
	int proizvod = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0)
			cout << "\n\n\t\tJedan od unesenih brojeva je nula tako da je proizvod svih brojeva 0!";
		proizvod *= arr[i];
	}
	return proizvod;
}

int zbirparnih(int arr[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] % 2 == 0)
			sum += arr[i];
	return sum;
}

int brojnula(int arr[], int n) {
	int brojac = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] == 0)
			brojac++;
	return brojac;
}

int brojneg(int arr[], int n) {
	int brojac = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] < 0)
			brojac++;
	return brojac;
}

float prosek(int arr[], int n) {
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	return sum / n;
}

int main() {
	int n, num;
	int arr[100];
	cout << "\nUnesite koliko brojeva zelite unijeti (do 100): ";
	
	while (true) {
		cin >> n;
		if (n > 0 && n < 100)
			break;
		cout << "\nPokusajte ponovo (0 > n > 100): ";
	}

	for (int i = 0; i < n; i++) {
		cout << "\nMolimo unesite " << i + 1 << ". broj: ";
		cin >> num;
		arr[i] = num;
	}

	cout << "\nBroj pozitivnih clanova niza: " << brojpoz(arr, n);
	cout << "\nProizvod clanova niza: " << proizvod(arr, n);
	cout << "\nZbir parnih clanova niza: " << zbirparnih(arr, n);
	cout << "\nBroj clanova niza jednakih nuli: " << brojnula(arr, n);
	cout << "\nBroj negativnih clanova niza: " << brojneg(arr, n);
	cout << "\nProsjek clanova niza: " << prosek(arr, n);
	cout << endl;
}
