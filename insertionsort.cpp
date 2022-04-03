#include <iostream>

using namespace std;

/*

İnsertion Sort 
Eklemeli Sıralama

Soldaki ile karşılaştırılır küçük olan sağa yazılır

1 20 17 10 9 12
	1 20 17 10 9 12
	1 17 20 10 9 12
		1 17 20 10 9 12
		1 17 10 20 9 12
		1 10 17 20 9 12
			1 10 17 20 9 12
			1 10 17 9 20 12
			1 10 9 17 20 12
			1 9 10 17 20 12
				1 9 10 17 20 12
				1 9 10 17 12 20
				1 9 10 12 17 20

*/

int main() {

	int dizi[6] = { 1,20,17,10,9,12 };
	int araciEleman;

	for (int i = 0; i < 6; i++)	{
		for (int j = i; j > 0 && dizi[j] < dizi[j - 1]; j--) {
			araciEleman = dizi[j];
			dizi[j] = dizi[j - 1];
			dizi[j - 1] = araciEleman;
		}
	}

	// Ekrana Yazdırma

	for (int a = 0; a < 6; a++) {
		cout << dizi[a] << "\t";
	}

	return 0;
}