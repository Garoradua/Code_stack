#include<iostream>
using namespace std;
int main(){
	int a[] = {1,-2,3,7,0,9,46,-20};
	int n = sizeof(a)/sizeof(int);

	
		for(int i=1; i<n; i++){
			int temp = a[i];
			int j = i-1;

			while(a[j]>temp && j>=0){
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = temp;
		}
		cout << "elements are in sorted form that is :";
		for(int i=0; i<n; i++){
		cout <<  a[i] << " ";
	}
}