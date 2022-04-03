#include <iostream>

using namespace std;

struct Address {

	string cityName;
	int No;

};

struct Employee {
	
	int id;
	string name;
	string department;
	Address* address;

};

int main() {
	
	Employee employee;
	employee.id = 12;
	employee.name = "ali ercan";
	employee.department = "bilisim";

	Address adress = { "ankara", 5 };

	employee.address = &adress;
	
	Employee* ptr = &employee;

	cout << ptr->address->cityName << endl;

	return 0;
}