#include <iostream>

using namespace std;

struct employee {
	int id;
	string name;
	string department;

};

void showemployee(employee employee) {

	cout << "id: " << employee.id << endl;
	cout << "isim: " << employee.name << endl;
	cout << "departman: " << employee.department << endl;

}

int main() {

	employee employee1 = { 12,"ali ercan","bilisim" };

	showemployee(employee1);

	return 0;
}