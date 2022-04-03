#include <iostream>

using namespace std;

/*

Merge sort (birleştirmeli sıralama)

7 1 5 3 2 4 8 0				divide()
7 1 5 3		2 4 8 0
7 1		5 3		2 4		8 0
7 1		5 3		2 4		8 0

1 7		3 5		2 4		0 8		merge()
1 3	5 7		0 2	4 8
0 1	2 3	4 5	7 8

*/

int a[] = { 7,7,5,3,2,4,8,0 };
int b[8];

void birlestir(int bas, int orta, int son) {

	int i, j, k;
	for (i = bas; i <= son; i++) 
	{
		b[i] = a[i];
		i = bas;
		j = orta + 1;
		k = bas;
	}
	
	while (i <= orta && j <= son) {

		if (b[i] <= b[j])
			a[k++] = b[i++];
		else
		{
			a[k++] = b[j++];
		}
	}
	while (i<=orta)
	{
		a[k++] = b[i++];
	}
}

void bol(int bas,int son) {

	if (bas < son) {

		int orta = (bas + son) / 2;
		bol(bas, orta);
		bol(orta + 1, son);

		birlestir(bas, orta, son);

	}

}

int main() {

	bol(0, 7);
	for (int i = 0; i <= 7; i++)

		printf("%d", a[i]);

	return 0;
}