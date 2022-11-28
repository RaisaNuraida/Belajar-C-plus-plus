#include <iostream>
using namespace std;

int main (){
	int nilai;
	cout << "Nilai Kamu=";
	cin >> nilai;
	if (nilai > 78 ){
		cout << "Lulus";
	}else if ( nilai == 78){
		cout << "Lulus KKM";
	}else{
		cout << "Tidak Lulus";
	}
	return 0;
}