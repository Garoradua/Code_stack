#include <iostream>
using namespace std;
int largestsum(int *arr, int n){
	int cs =0;
	int largest =0;
	for(int i=0; i<n; i++){
		cs+= arr[i];
		if(cs<0){
			cs = 0;
		}
		largest = max(cs,largest);
	}
	return largest;
}
int main(){
	int arr[] = {2,-3,1,0,5,-9,5,7,-3,10};
	int n = sizeof(arr)/sizeof(int);
	cout << largestsum(arr, n);
}