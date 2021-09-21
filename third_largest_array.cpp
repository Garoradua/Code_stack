#include<iostream>
using namespace std;
int main(){
	int a[] = {10, 13, 19, 9, 2};
	// int a[] = {1,2,5,4,3};
	int size = 5;

	for(int i=0; i<size; i++){
		for(int j=0; j<size-1-i; j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=0; i<size; i++){
		cout << a[i] << " ";
	}
	cout << "Third largest" << a[2];
}