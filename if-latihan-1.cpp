#include <iostream>
using namespace std;

int main (){
	int nilai;
	cout << "Nilai Kamu=";
	cin >> nilai;
	if (nilai > 90 ){
		cout << "A";
	}else if ( nilai == 90){
		cout << "A";
	}else if ( nilai > 80){
		cout << "B";
	}else if ( nilai > 70){
		cout << "C";
	}else{
		cout << "D";
	}
	return 0;
}