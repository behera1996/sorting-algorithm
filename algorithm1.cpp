#include <bits/stdc++.h>
using namespace std;

void algorithm(int arr[]){
	int n=12;
	
	for(int pass = n-1;pass >= 0; pass--){    // this is for the pass the number from //
		for(int i=0; i <= pass-1 ; i++)    // this is from the internal elenent //
		if(arr[i] > arr[i+1]) {
			// swap elements
			int temp = arr[i];
			arr[i]=arr[i+1];
			arr[i+1] = temp;
		}
	}
	 int z=0;   
   while (z < 12) {
      cout << arr[z] << "  ";
       z++;
   }
}

int main (){
	int arr[]= {83,1,45,95,45,52,11,47,0,45,67,82};
	
	algorithm(arr);
	return 0;
}