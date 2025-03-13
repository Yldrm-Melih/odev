#include <iostream>
using namespace std;

int main() {
    int sayi;

    cout << "bir sayi girin (0 girerek cikabilirsiniz)" << endl;
    cin >> sayi;

    while (sayi != 0) {

        
        cout << "Girdiginiz sayi: " << sayi << endl;
        cout << "bir sayi girin" << endl;
        cin >> sayi;
    }

    cout << "_____________________" << endl;
    cout << "Program sonlandirildi" << endl;
    cout << "---------------------" << endl;

    return 0;
}
