#include <iostream>

using namespace std;

struct employee {
	int id;
	string name;
	string department;

};
int main() {

	employee employee1 = { 12,"ali ercan","bilisim" };

	employee* ptr = &employee1;

	cout << employee1.name << endl;

	cout << ptr->department << endl;

	return 0;
}