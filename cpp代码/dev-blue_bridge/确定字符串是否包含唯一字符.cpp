#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin>>s;
	for(int k=0;k<s.size();k++){
		if(s[k]<='Z'&&s[k]>='A')
		{
			s[k]=s[k]+32;
		}
	}
	for(int i=0;i<s.size();i++){
		for(int j=i;j<s.size()-1-i;j++){
			if(s[i]==s[j+1]){
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
}
