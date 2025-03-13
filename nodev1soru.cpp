#include <iostream>
using namespace std;

int main() {
    int secim;
    cout << "Kahve Otomatina Hos Geldiniz" << endl;
    cout << "Lutfen bir kahve secin:" << endl;
    cout << "1 - Espresso" << endl;
    cout << "2 - Latte" << endl;
    cout << "3 - Mocha" << endl;
    cout << "4 - Turk Kahvesi" << endl;
    cout << "Seciminiz: ";
    cin >> secim;
    cout << "-----------------------" << endl;


    switch (secim) {
    case 1:
        cout << "Espresso sectiniz" << endl;
        cout << "Fiyat: 15 TL" << endl;
        cout << "Hazirlanma suresi: 3 dakika" << endl;
        cout << "-----------------------" << endl;
        cout << "Afiyet bal seker olsun" << endl;
        cout << "-----------------------" << endl;
        break;
    case 2:
        cout << "Latte sectiniz" << endl;
        cout << "Fiyat: 20 TL" << endl;
        cout << "Hazirlanma suresi: 4 dakika" << endl;
        cout << "-----------------------" << endl;
        cout << "Afiyet bal seker olsun" << endl;
        cout << "-----------------------" << endl;
        break;
    case 3:
        cout << "Mocha sectiniz" << endl;
        cout << "Fiyat: 25 TL" << endl;
        cout << "Hazirlanma suresi: 5 dakika" << endl;
        cout << "-----------------------" << endl;
        cout << "Afiyet bal seker olsun" << endl;
        cout << "-----------------------" << endl;
        break;
    case 4:
        cout << "Turk Kahvesi sectiniz" << endl;
        cout << "Fiyat: 10 TL" << endl;
        cout << "Hazirlanma suresi: 3 dakika" << endl;
        cout << "-----------------------" << endl;
        cout << "Afiyet bal seker olsun" << endl;
        cout << "-----------------------" << endl;
        break;
    default:
        cout << "Gecersiz secim" << endl;
        break;
    }

    
    return 0;
}
