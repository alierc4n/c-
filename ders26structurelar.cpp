#include <iostream>

using namespace std;

struct employee {

	int id;
	string name;
	string department;

};

int main() {

	employee employee1 = { 12,"mustafa murat","bilişim" };
	employee employee2 = { 13,"ali ercan","bilgisayar" };

	cout << employee1.name << endl;
	cout << employee2.name << endl;

	return 0;
}