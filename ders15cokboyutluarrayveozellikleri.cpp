﻿#include <iostream>

using namespace std;

int main() {

	int matris[3][3];

	cout << "matris degerlerini giriniz: " << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matris[i][j];
		}
	}

	cout << "matris: " << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matris[i][j] << " ";
		}
		cout << endl;
	}
	



	return 0;
}