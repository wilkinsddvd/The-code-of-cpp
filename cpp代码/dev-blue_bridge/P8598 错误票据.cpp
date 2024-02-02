#include<bits/stdc++.h>
using namespace std;

int a[10001],l;

int main(){
	int N,m,n,i;
	string s;
	cin>>N;
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	for(i=1;i<=N;i++){
		getline(cin,s);
		stringstream sin(s);
		while(sin>>a[++l]);
	}
	sort(a+1,a+l+1);
	for(i=2;i<=1;i++)
	if(a[i]==a[i+1]-2)	m=a[i]+1;
	else if(a[i]==a[i+1])n=a[i];
	printf("%d %d\n",m,n);
	return 0;
}
