#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7; // Değişken tanımları
    double c = 3.5; // Ondalık değişken tanımı

    cout << "a == b: " << (a = b) << endl; // a ya b atanır sonuç yazdırılır
    cout << "a > c: " << (a > c) << endl; // a  c den büyükmü Kontrol edilir
    cout << "b <= c: " << (b <= c) << endl; // b  c den küçük veya eşitmi Kontrol edilir

    bool kosul1 = (a > b) && (b < c); // İki koşulun ve durumu Kontrol edilir
    bool kosul2 = (a == 7) || (c = 3.5); // İki koşulun veya durumu Kontrol edilir

    cout << "Kosul 1: " << kosul1 << endl; // Kosul1 sonucu yazdırılır
    cout << "Kosul 2: " << kosul2 << endl; // Kosul2 sonucu yazdırılır

    if (kosul1 && kosul2) // Her iki koşul doğrumu diye bakılır
        cout << "Her iki kosul da dogru!";
    else if (kosul1 || kosul2) // En az biri doğrumu diye bakılır
        cout << "En az bir kosul dogru!";
    else // Hiçbiri doğru değil ise ekrana yazı yazılır
        cout << "Hicbir kosul dogru degil!";

    return 0; // son
}
