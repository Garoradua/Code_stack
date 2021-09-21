#include<iostream>
using namespace std;
int main(){
	int a[] = {1,-2,3,7,0,9,46,-20};
	int n = sizeof(a)/sizeof(int);
	int j, temp;
	for(int i=1; i<n; i++){
		 j = i-1;
		   temp = a[i];
		while(j>=0 && a[j]>temp){
			// temp = a[i];
			a[j+1] = a[j];
			j--;
		}
		// j++;
		a[j+1] = temp;
	}

	for(int i=0; i<n; i++){
		cout << a[i] << " ";
	}
}