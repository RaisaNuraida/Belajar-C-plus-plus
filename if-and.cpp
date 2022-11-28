#include <iostream>
using namespace std;

int main (){
	int angka;
	cout << "Masukan Angka=";
	cin >> angka;
	if ( angka <= 0){
		cout << "angka negatif/nol";
	}else if (angka > 0 && angka <= 10){
		cout << " 1 sampai 10";
	}else{
		cout << "angka lebih dari 10";
	}
}