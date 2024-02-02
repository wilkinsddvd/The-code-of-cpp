#include<bits/stdc++.h>
using namespace std;

int main(){
	int n1,n2;
	char ch;
	cin>>n1>>ch>>n2;
	switch(ch){
		case'+':
			cout<<n1+n2;
			break;
		case'-':
			cout<<n1-n2;
			break;
		case'*':
			cout<<n1*n2;
			break;
		case'/':
			cout<<n1/n2;
			break;
		case'%':
			cout<<n1%n2;
			break;
	}
	return 0; 
}
