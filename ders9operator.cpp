#include <iostream>

using namespace std;

int main() {

	/*

	or operatörü || --> en az bir durum doğruysa genel sonuç true, aksi halde false
	and operatörü && --> en az bir durum yanlışsa genel sonuç false, aksi halde true
	not operatörü ! --> false işlemi true'ya , true işlemi false'a çevirir

	*/

	string sys_username = "ali_ercan";
	string sys_password = "123456";

	string username;
	string password;

	cout << "kullanici adini giriniz: ";
	cin >> username;

	cout << "parolanizi giriniz: ";
	cin >> password;

	if (sys_username == username && sys_password == password) {

		cout << "hosgeldiniz!.." << endl;

	}
	else if (sys_username != username && sys_password == password) {

		cout << "kullanici adini hatali girdiniz!.. " << endl;

	}
	else if (sys_username == username && sys_password != password) {

		cout << "parola yanlis girdiniz!.. " << endl;

	}
	else {

		cout << "kullanici adini ve parolanizi yanlis girdiniz!.." << endl;

	}

	return 0;
}