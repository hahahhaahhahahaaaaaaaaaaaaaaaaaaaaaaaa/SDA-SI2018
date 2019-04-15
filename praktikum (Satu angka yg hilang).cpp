#include <iostream>

using namespace std;



int main(){

	int acak [6] = {3,1,7,4,3,5};

			     // 0 1 2 3 4 5

	int kumulatif [8] = {0,0,0,0,0,0,0,0};

					// 0 1 2 3 4 5 6 7

	int hasil [6];

	int temp;

	int jumlah;

	int a;

	// langkah pertama

	for (int i = 0; i <= 5; i++){

		temp = acak[i];	// satu

		jumlah = kumulatif [temp];	// dua

		jumlah = jumlah + 1; 	// tiga

		kumulatif [temp] = jumlah;

	}

	// cek

	for (int j = 0; j<=7; j++){

		cout << kumulatif [j];

	}

	cout << endl;

	// Langkah kedua

	for (int i = 0; i <= 7; i++){

		a = kumulatif [i] + kumulatif [i+1];

		kumulatif [i+1] = a;

	}

	// cek

	for (int j = 0; j<=7; j++){

		cout << kumulatif [j];

	}

	int c;

	cout << endl;

	// Langkah ke tiga

	for (int i = 0; i <=5; i++){

		temp = acak[i];	// satu

		c = kumulatif [temp] - 1;

		// satu langkah yang hilang

		kumulatif [temp] = c;

		hasil [c] = temp;

	} 

	

	for (int j = 0; j<=5; j++){

		cout << hasil [j];

	}

}

