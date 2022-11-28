#include <iostream>
#include <string>
using namespace std;

int main(){
	int angka[]={3,5,6,8,12};
	cout << "Angka " << angka[2] << endl;
	char huruf[]={'X','Y','Z'};
	printf ("Huruf %c \n",huruf[1]);
	string nama[3]={"Bagas","Tanaka","Panca"};
	cout << "Nama = " << nama[2] << endl;
	int nilai[3][4]=
	{
		{10,20,30,40},
		{50,60,70,80},
		{90,100}
	};
	cout << "Nilai " << nilai[2][1] << endl;
	int X = 0;
	for(X; X <= 5; X++){
		cout << angka [X] << endl;
	}
}