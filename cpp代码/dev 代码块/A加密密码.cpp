#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	getline(cin,a); 
	for(int i=0;i<a.size();i++){
		if(i%2==0){
			i=i*3;
		}
		if(i%2!=0){
			i=i*2;
		}
	} 
	cout<<a;
	return 0;
}
