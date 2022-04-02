#include <iostream>

using namespace std;

int main() {

	string password = "aliercan";
	string input;

	cout << "parolanizi giriniz: ";
	cin >> input;

	if (password == input) {
		cout << "parola dogru";
	}
	else {
		cout << "parola yanlis:";
	}
	return 0;
}