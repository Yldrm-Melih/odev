#include <iostream>
using namespace std;

int main() {
    int sayi;

    int a = 7, b = 3;
    int c = 0;

    cout << "bir deger giriniz: ";
    cin >> sayi;

    cout << "5 ekleyince: " << (sayi + 5) << endl;
    cout << "2 ile carpinca: " << (sayi * 2) << endl;
    cout << "-3 cikinca: " << (sayi - 3) << endl;
    cout << "10 ile bolumunden kalan: " << (sayi %= 10) << endl;

    cout << ((7 >= 3 || 7 < 7) && 7 == 0);


    return 0;
}
