#include<bits/stdc++.h>
using namespace std;

char a[1005];
char b[1005];

int main(){
	cin>>a>>b;
	int len =strlen(a);
	int i=0,sum=0;
	while(i<len){
		if(a[i]!=b[i]){
			a[i+1]=(a[i+1]=='*'?'o':'*');
			sum++;
		}
		i++;
	}
	cout<<sum;
	return 0;
}
