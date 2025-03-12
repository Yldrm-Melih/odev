#include <iostream>
#include <string>


int main()
{
	std::string ad , soyad , meslek;

	

	std::cout << "********************************" << std::endl;

	std::cout << "lutfen adinizi yaziniz: ";
		std::getline(std::cin, ad);


	std::cout << "lutfen soyadinizi yaziniz: ";
		std::getline(std::cin, soyad);


	std::cout << "lutfen mesleginizi yaziniz: ";
		std::getline(std::cin, meslek);

		std::cout << "********************************" << std::endl;


		std::cout << "******************" << std::endl;
		std::cout << "* kisi bilgileri *" << std::endl;
		std::cout << "******************" << std::endl;

		std::cout << "......................................" << std::endl;
		std::cout << ". adi: " << ad << std::endl;
		std::cout << "......................................" << std::endl;
		std::cout << ". soyadi: " << soyad << std::endl;
		std::cout << "......................................" << std::endl;
		std::cout << ". meslegi: " << meslek << std::endl;
		std::cout << "......................................" << std::endl;
		std::cout << ". ad-soyad uzunlugu: " << ad.length() + soyad.length() << std::endl;
		std::cout << "......................................" << std::endl;
		std::cout << "merhaba ben " << ad, soyad; std::cout << " ben " << meslek << " olarak calisiyorum";
		std::cout << "......................................" << std::endl;
		

	return 0;
}