#include <iostream>
using namespace std;

int main() {

	int a = 5;

	int *ptr = &a;

	cout << "degiskenin adresi: " << &a << endl;
	cout << "degiskenin degeri: " << *ptr << endl;
	
	*ptr = 6;

	cout << "degiskenin yeni degeri: " << a << endl;


	return 0;
}