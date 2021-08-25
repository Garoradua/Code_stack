#include <iostream>
using namespace std;
void reverse(int *arr, int n){
int s=0;
int e = n-1;

// while(s<e){
// 	swap(arr[s], arr[e]);
// 	s++; e--;
// }
int mid = (s+e)/2;
	for(int i=0; i<mid; i++){
		swap(arr[i],arr[n-1-i]);
	}
}
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	reverse(arr,10);

	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
}