#include <iostream>
using namespace std;
int main(){
	
//	int arr [] = {7,2,6,4,9};
//	int n = sizeof(arr) / sizeof(arr[0]);
//	
//	cout << "Array sebelum diurutkan: ";
//	for (int i = 0; i < n; i++){
//		cout << arr[i] << " ";
//	}
//	
//	for (int i =0; i < n-1; i++){
//		for (int j =0; j < n - i - 1; j++){
//			if (arr[j] > arr[j + 1]){
//				int oke = arr [j];
//				arr[j] = arr [j +1];
//				arr [j + 1] = oke;
//			}
//		}
//	}
//	cout << endl;
//	
//	cout << "Array setelah diurutkan: ";
//	for (int i =0; i < n; i++){
//		cout << arr[i] << " ";
//	}
 
     int arr [] = {5,7,9,3,2};
     int n = sizeof(arr) / sizeof (arr[0]);
     
     cout <<"Array sebelum diurutkan:";
     for (int i =0; i < n; i++){
     	cout << arr [i] << " ";
	 }
	 
	 for( int i =0; i < n-1; i++){
	 	int indeks = i;
	 	for (int j = i + 1; j < n; j++){
	 		if (arr [j] < arr [indeks]){
	 			indeks = j;
			 }
		 }
		 if (indeks != i){
		 	int oke = arr [i];
		 	arr[i] = arr [indeks];
		 	arr[indeks] = oke;
		 }cout << endl;
		 cout << "Tahap " << i + 1 << ": ";
		 for (int k =0; k < n; k++){
		 	cout << arr [k] << " ";
		 }
	 }
	 cout << endl;
	 cout << "Array setelah diurutkan: ";
	 for (int i =0; i < n; i++){
	 	cout << arr [i] << " ";
	 }
	 
	 return 0;
}
