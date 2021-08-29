#include <iostream>
using namespace std;
int largestsum(int *arr, int n){
	int prefix[n] = {0};
	prefix[0] = arr[0];
	int largest = 0;
	for(int i=1; i<n; i++){
		prefix[i] = prefix[i-1] + arr[i];
	}
	for(int i=0; i<n; i++){
		int sum=0;
		for(int j=i; j<n; j++){
			sum = i>0 ? prefix[j]-prefix[i-1] : prefix[j]; 		
			largest = max(sum, largest);
		}
	}
	return largest;
}
int main(){
	int arr[] = {2,-3,1,0,5,-9,5,7,-3,10};
	int n = sizeof(arr)/sizeof(int);
	cout << largestsum(arr, n);
}