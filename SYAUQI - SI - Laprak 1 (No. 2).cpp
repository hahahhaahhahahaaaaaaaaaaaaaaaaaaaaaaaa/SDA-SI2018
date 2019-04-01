#include <iostream>
using namespace std;

float pangkat (float x, int n){
	
	float hasil;
	hasil = 1;
	for (int i=1; i<= n; i++){
	hasil = hasil*x;	
}
return hasil;
}

int main () {
	
	int x,n;
	cout << "Angka 	: "; cin >> x;
	cout << "Pangkat : "; cin >> n;
	cout << "Hasil 	: " << pangkat(x,n);
}

