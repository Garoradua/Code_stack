#include <iostream>
using namespace std;
void bubble_sort(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main(){
	int arr[] = {-10,-2,1,0,3,8,3,6,-5,3};
	int n = sizeof(arr)/sizeof(int);
	bubble_sort(arr,n);
	for(int x: arr){
		cout << x <<", ";
	}
}