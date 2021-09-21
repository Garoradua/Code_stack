#include <iostream>
using namespace std;
int main(){
	string s = "gourav arora";
	// string str[10];
	int len = s.length();
	
	for(int i=0; i<len; i++){
		int count = 0;
		for(int j=i+1; j<len; j++){
			if(s[i]==s[j]){
				count++;
				cout << s[j] << " " << count << endl;
			}
		}

	}
}