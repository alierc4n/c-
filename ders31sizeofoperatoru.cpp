#include <iostream>
using namespace std;

struct Student {
	int id;
	char letter;

};

int main() {

	int a = 10;

	cout << "integer: " << sizeof(int) << "byte" << endl;
	cout << "char: " << sizeof(char) << "byte" << endl;
	cout << "double: " << sizeof(double) << "byte" << endl;
	cout << "float: " << sizeof(float) << "byte" << endl;

	cout << "student: " << sizeof(Student) << "byte" << endl;


	return 0;
}