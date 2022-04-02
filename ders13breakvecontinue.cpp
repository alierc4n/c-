#include <iostream>

using namespace std;

int main() {

	/*int i = 0;
	while (i < 10) {
		if (i == 5) {
			break;
		}
		cout << "i: " << i << endl;
		i++; 
	}*/
	
	/*for (int i = 0; i < 10; i++) {
		if (i == 3 || i == 5) {
			continue;
		}
		cout << "i: " << i << endl;
	}*/

	/*int i = 0;
	while (i < 10) {
		if (i == 3 || i == 5) {
			i++;
			continue;
		}
		cout << "i: " << i << endl;
		i++;
	}
	*/


	string sys_username = "ali_ercan";
	string sys_password = "123456";

	string username;
	string password;

	while (true)
	{
		cout << "kullanici adi: ";
		cin >> username;
		cout << "parola;";
		cin >> password;

		if (username == sys_username && password==sys_password )
		{
			cout << "hosgeldiniz!.. " << username << endl;
			break;
		}
		else if (username != sys_username && password == sys_password)
		{
			cout << "kullanici adi hatali!.. " << endl;
		}
		else if (username == sys_username && password!= sys_password)
		{
			cout << "parola hatali!.." << endl;
		}
		else
		{
			cout << "kullanici adi ve sifre hatali!.. " << endl;
		}
	}

	 




	return 0;
}