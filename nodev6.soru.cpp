#include <iostream>
#include <string>
using namespace std;

int main() {
    string cumle;
    char harf;
    int sayac = 0, i = 0;

    cout << "Bir cumle girin: ";
    getline(cin, cumle);
    cout << "Bir harf girin: ";
    cin >> harf;

    do {
        if (cumle[i] == harf) {
            sayac++;
        }
        i++;
    } while (i < cumle.length());

    cout << "Cumlenizde " << harf << " harfi " << sayac
        << " kez geciyor, bu harf size ugur getiriyor" << endl;

    return 0;
}
