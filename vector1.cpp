#include <iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v = {1,2,3,4};
	for(int i=0; i<v.size(); i++){
		cout << v[i] << endl;
	}

	v.pop_back();
	v.push_back(9);

	for(int i=0; i<v.size(); i++){
		cout << v[i] << endl;
	}

	vector<int> v1(10,0);
	for(int i=0; i<v1.size(); i++){
		cout << v1[i] << endl;
	}
}