#include <iostream>

using namespace std;

int main() {

	int* ptr;

	int size;

	cout << "kac deger saklayacaksiniz: ";

	cin >> size;

	ptr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cout << "deger: ";
		cin >> ptr[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << "eleman: " << ptr[i] << endl;
	}

	delete[] ptr;

	return 0;
}