#include <iostream>
using namespace std;

int main () {
	int nilai_web, nilai_pbo;
	cout <<"masukan nilai web";
	cin >> nilai_web;
	cout <<"masukan nilai pbo";
	cin >> nilai_pbo;
	if(nilai_web >= 80 and nilai_pbo >= 80) {
		cout <<"Lulus 2 mapel";
	}else if (nilai_web >= 80 or nilai_pbo >= 80) {
		cout <<"Lulus 1 mapel";
	}else{
		cout <<"Tidak lulus";
	}		
}