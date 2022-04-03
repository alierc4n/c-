#include <iostream>

using namespace std;

/*

Bubble Sort
Kabarcık Sıralaması

1 17 10 9 12 20
1 10 9 12 17 20
1 9 10 12 17 20
...
...
...

*/

int main() {

	int dizi[6] = { 1,20,17,10,9,12 };

	for (int adim = 1; adim < 6; adim++) {
		for (int j = 0; j < 6 - adim; j++) {
			if (dizi[j] > dizi[j + 1]) {
				int araciEleman = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = araciEleman;
			}
		}
	}

	// Ekrana yazdirma

	for (int a = 0; a < 6; a++) {
		cout << dizi[a] << "\t";
	}

	return 0;
}