#include <iostream>
using namespace std;
int largestsum(int *arr, int n){
	int largest = 0;
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			int sum=0;
			for(int k=i; k<=j; k++){
					sum += arr[k];		
			}
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