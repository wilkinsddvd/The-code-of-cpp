#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[26] = {0};
	string arr;
	int max = 0;
	char max_sp;
	cin>>arr;
	int length = arr.length();
	for(int i=0;i<length;i++){
		a[arr[i]-'a']++;
	}
	for(int i=25;i>=0;i--){
		if(a[i]>=max){
			max = a[i];
			max_sp = char(i+'a');
		}
	}
	cout<<max_sp<<endl;
		cout<<max;
	return 0;
} 
