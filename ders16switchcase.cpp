#include <iostream>

using namespace std;

int main() {

	int islem;

	cout << "islemi giriniz: ";
	cin >> islem;
	
	switch (islem)
	{

	case 1: cout << "1. islemi sectiniz: " << endl;
		break;
	case 2: cout << "2. islemi sectiniz: " << endl;
		break;
	case 3: cout << "3. islemi sectiniz: " << endl;
		break;
	case 4: cout << "4. islemi sectiniz: " << endl;
		break;
	default:
		cout << "gecersiz islem!.. " << endl;
		break;
	}

	return 0;
}