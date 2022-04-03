#include<iostream>

using namespace std;

struct Address {

	string cityName;
	int No;
};

struct employee {
	int id;
	string name;
	string department;
	Address address;

};

int main() {

	employee employee = { 12,"ali ercan","bilisim",{"istanbul",5} };

	cout << "id: " << employee.id << endl;
	cout << "isim: " << employee.name << endl;
	cout << "departman: " << employee.department << endl;
	cout << "sehir ismi: " << employee.address.cityName << endl;
	cout << "bina no: " << employee.address.No << endl;


	return 0;
}