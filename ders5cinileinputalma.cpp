#include <iostream>

using namespace std;

int main() {
	
	int x, y;

	cout << "bir sayi giriniz: ";
	cin >> x;

	cout << "girdiginiz sayi:" << x;

	cout << "ikinci sayiyi giriniz: ";
	cin >> y;

	cout << "girdiginiz sayi: " << y;

	int toplam, cikarma, carpma, bolme;
	toplam = x + y;
	cikarma = x - y;
	carpma = x * y;
	bolme = float(x) / y;

	cout << "toplama sonucunuz: " << toplam;
	cout << "cikarma sonucunuz: " << cikarma;
	cout << "carpma sonucunuz: " << carpma;
	cout << "bolme sonucunuz: " << bolme << endl;

	return 0;
}