#include <iostream>
using namespace std;

int main (){
	
	int Data[4] ={ 4, 1, 2, 3};
				// 0  1  2  3
				
	for(int i=0; i<3; i++){
		int temp;
		int indeks = i;
		for(int j=i; j<3; j++){
			if(Data[indeks]>Data[j]){
				indeks = j;
			}
		}
		
		temp = Data[indeks];
		Data[indeks] = Data[i];
		Data[i] = temp;
	}
	
	for(int i=0; i<4; i++){
		cout << Data[i]<< " ";
	}
}
