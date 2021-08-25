#include <iostream>
using namespace std;
void printpair(int *arr, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			// if(i==j){
			// 	continue;
			// }
			cout << arr[i] <<","<< arr[j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int arr[] = {1,2,3,4};
	int n=4;
	printpair(arr,n);
}