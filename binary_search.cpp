#include<iostream>
using namespace std;
binarysearch(int *a, int n, int key){
	int s = 0;
	int e = n-1;

	while(s<=e){
	int mid = (s+e)/2;
	if(a[mid]==key){
		return mid;
	}else if(a[mid]>key){
		e = mid-1;
	}else{
		s = mid+1;
	}
}
	return -1;
}


int main(){
	int arr[] = {10,20,30,40,50,60,77,89};
	int n = sizeof(arr)/sizeof(int);
	cout << "Enter Key";
	int key;
	cin >> key;
	int value;
	value = binarysearch(arr, n, key);
	if(value==-1){
		cout << key <<" not found!!";
	}else{
		cout << key <<" found at index "<< value;
	}
}