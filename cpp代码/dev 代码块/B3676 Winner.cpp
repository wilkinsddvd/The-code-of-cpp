#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n>2)
		cout<<"Survivor";
	else if(n==2)
		cout<<"Tie";
	else
		cout<<"Hunter";
	return 0;
}
