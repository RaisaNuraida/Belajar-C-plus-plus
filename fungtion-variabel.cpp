#include <iostream>
using namespace std;

void hitungVolumeBalok(){
	double alas = 6;
	double tinggi = 5;
	double panjang = 9;
	double volume = (alas * tinggi  * panjang);
	cout << "Volume baloknya adalah: " << volume << endl;
}

int main(){
	hitungVolumeBalok();
	return 0;
}