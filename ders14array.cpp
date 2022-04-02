#include <iostream>

using namespace std;

int main() {

	/*int array[3];

	array[0] = 10;
	array[1] = 20;
	array[2] = 30;

	cout << "0. index: " << array[0] << endl;
	cout << "1. index: " << array[1] << endl;
	cout << "2. index: " << array[2] << endl;
	*/

	// int array[]= {10,20,30,40}

	// double array[] = {1.2,3.5,4.6,7.6};

	/*for (int i = 0; i < 4; i++) {
		cout << i << ". index degeri: " << array[i] << endl;
	}
	*/

	string array[4];

	for (int i = 0; i < 4; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < 4; i++) {
		cout << i << ". index degeri: " << array[i] << endl;

	}

	return 0;
}