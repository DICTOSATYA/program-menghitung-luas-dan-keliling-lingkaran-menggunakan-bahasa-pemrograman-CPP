#include <iostream>
using namespace std;
int main (){
	
	float r, keliling;
	const float phi=3.14;
	
	cout << "Menghitung Keliling Lingkaran" << endl;
	
	cout << "Masukkan Nilai Jari-jari Lingkaran :";
	cin >> r;
	
	keliling = 2*phi*r;
	
	cout << "Hasil Keliling Lingkaran =" <<keliling;
	
	return 0;
}
