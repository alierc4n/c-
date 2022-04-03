#include <iostream>
using namespace std;

void degerDegistir(int af) {

	af = 20;
	cout << "fonksiyon icindeki deger: " << af << endl;
}

int main() {

	int a = 10;
	cout << "a degiskeninin degeri: " << a << endl;
	degerDegistir(a);
	cout << "fonksiyon bittikten sonra a degiskeninin degeri: "<< a << endl;
	return 0;
}