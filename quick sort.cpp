#include <iostream>

/*

quick sort (hızlı sıralama)
pivot olarak belirlenen sayınan sağ ve sol 
kısımları pivot ile kıyaslanır bu işleme
requrcive (özyineli) olarak teklarlar.

7 3 5 1 2
7 3 [5] 1 2  -> 5 pivot olarak belirlendi
2 3 [5] 1 7
2 3 1 [5] 7
2 3 1
2 [3] 1
2 1 [3]
2 1
1 2	3 5 7 

*/

using namespace std;

void quickSort(int dizi[], int bas, int son) {

	int i, j, pivot, temp;
	i = bas;
	j = son;
	pivot = dizi[(i + j) / 2];
	
	do
	{
		while (dizi[i] < pivot)
			i++;

		while (dizi[j] > pivot)
			j--;
		if (i<=j)
		{
			temp = dizi[i];
			dizi[i] = dizi[j];
			dizi[j] = temp;
			i++;
			j--;
		}

	} while (i < j);

	if (i < son)
		quickSort(dizi, i, son);
	if (bas < j)
		quickSort(dizi, bas, j);

}

int main() {

	int n;
	cout << "dizi boyunu giriniz: "; 
	cin >> n;
	int dizi[n];
	int i = 0;
	while (i < n) {
		cout << "sayi: ";
		cin >> dizi[i];
		i++;
	}

	quickSort(dizi, 0, n - 1);
	cout << "hizli siralama islemi tamam" << endl;
	for (i = 0; i < n; i++)
		cout << dizi[i] << " ";


	return 0;
}