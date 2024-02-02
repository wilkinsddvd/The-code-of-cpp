#include<bits/stdc++.h>
using namespace std;

int main(){
	string str1,str2;
	cin>>str1>>str2;
	int length1 = str1.length();
	int length2 = str2.length();
	if(length1 = length2){
		sort(str1.begin(),str1.end());
		sort(str2.begin(),str2.end());
		if(str1 == str2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	else
		cout<<"NO"<<endl;
	return 0;
}

