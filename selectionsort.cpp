#include <iostream>

/*

Selection sort
seçerek sıralama

1 20 17 10 9 12

en küçük değeri bulup dizinin en başına atama
tek tek karşılaştırma

*/


using namespace std;

int main() {

	int min, araciEleman;
	int dizi[6] = { 1,20,17,10,9,12 };

	for (int i = 0; i < 5; i++)
	{
		min = i;
		for (int j = i; j < 6; j++)
		{
			if (dizi[j] < dizi[min]) {
				min = j;
			}

		}

		araciEleman = dizi[i];
		dizi[i] = dizi[min];
		dizi[min] = araciEleman;

	}
	//Ekrana Yazdırma

	for (int a = 0; a < 6; a++) {
		cout << dizi[a] << "\t";
	}
	{

	}

	return 0;
}