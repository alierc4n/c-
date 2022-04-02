#include <iostream>
using namespace std;

int main() {

    int a, b;
    string girdi;

    cout << "Hesap Makinesine Hoşgeldiniz..." << endl;

    cout << "1. İşlem = Toplama İşlemi " << endl;
    cout << "2. İşlem = Çıkarma İşlemi " << endl;
    cout << "3. İşlem = Çarpma İşlemi " << endl;
    cout << "4. İşlem = Bölme İşlemi " << endl;

    cout << "Hangi İşlemi Yapacaksınız";
    cin >> girdi;

    if (girdi == "1") {
        cout << "a=";
        cin >> a;
        cout << "b ";
        cin >> b;
        cout << "Sonuç=" << a + b;
    }
    else if (girdi == "2") {
        cout << "a=";
        cin >> a;
        cout << "b ";
        cin >> b;
        cout << "Sonuç=" << a - b;
    }
    else if (girdi == "3") {
        cout << "a=";
        cin >> a;
        cout << "b ";
        cin >> b;
        cout << "Sonuç=" << a * b;
    }
    else if (girdi == "4") {
        cout << "a=";
        cin >> a;
        cout << "b ";
        cin >> b;
        cout << "Sonuç=" << a / b;
    }
    else {
        cout << "Yanlış Değer.";
    }



    return 0;
}