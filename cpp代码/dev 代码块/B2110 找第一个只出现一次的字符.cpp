#include<map>
#include<iostream>
#include<string>

using namespace std;

map<char,int>a;
string s;

int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		a[s[i]]++;
	}
	for(int i=0;i<s.size();i++){
		if(a[s[i]] == 1){
			cout<<s[i];
			return 0;
		}
	}
	cout<<"no";
	return 0;
}
