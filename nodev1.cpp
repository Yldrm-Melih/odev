#include <iostream>
using namespace std;

int main()
{
	int tamSayi;
	double ondalikliSayi;

	cout << "bir tam sayi giriniz: ";
	cin >> tamSayi;

	cout << "bir ondalikli sayi giriniz: ";
	cin >> ondalikliSayi;

	cout << "\nSonuclari:" << endl;

	cout << "toplama:" << (tamSayi + ondalikliSayi) << endl;
	cout << "cikarma:" << (tamSayi - ondalikliSayi) << endl;
	cout << "bolme:" << (tamSayi / ondalikliSayi) << endl;
	cout << "carpma:" << (tamSayi * ondalikliSayi) << endl;
	cout << "mod:" << (tamSayi %= ondalikliSayi)  << endl;

	cout << "\nVeri Tipleri:" << endl;
	cout << "int veri tipi = 4 byte" << endl;
	cout << "double veri tipi = 8 byte";



	return 0;


}