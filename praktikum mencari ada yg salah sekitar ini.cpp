#include<iostream>
using namespace std;

int main(){
	
	int acak [5] = {3, 1, 7, 4, 2} ;
				//  0  1  2  3  4
				
	int batas;
	for (int i = 0; i<4; i++) {
		int temp;
		batas = i + 1;
		
		while (batas>0) {
			if (acak[batas] < acak[batas - 1]) {
				temp = acak [batas];
				acak[batas] = acak[batas - 1];
				
				// ada yang salah sekitar sini
				acak[batas - 1] = temp;
				}
				batas --;
				
		}
	}
	for (int i = 0; i<5; i++) {
		cout << acak [i] << " ";
	}
}
