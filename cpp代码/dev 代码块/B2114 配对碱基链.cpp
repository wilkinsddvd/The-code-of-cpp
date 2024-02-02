#include<bits/stdc++.h>
using namespace std;

string s;


int main(){
	cin>>s;
	int l = s.size(); 
	for(int i=0;i<l;i++){
		if(s[i]=='A'){
			cout<<"T";
		}
		else if(s[i]=='T'){
			cout<<"A";
		}
		else if(s[i]=='G'){
			cout<<"C"; 
		}
		else if(s[i]=='C'){
			cout<<"G";
		}
	}
	return 0;
}
