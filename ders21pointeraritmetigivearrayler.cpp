#include<iostream>
using namespace std;

int main() {

	string array[] = { "mustafa","murat","ali" };

	string* ptr = array;

	cout << ptr + 1 << endl;
	cout << *(ptr + 1) << endl;

	cout << ptr[1] << endl;

	return 0;
}