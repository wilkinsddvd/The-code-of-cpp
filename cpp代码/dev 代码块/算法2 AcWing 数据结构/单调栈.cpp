#include<iostream>
using namespace std;

const int N = 100010;
int top,stk[N],n,a[N];

int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++)
	{
		while(top && stk[top] >= a[i]) top--;
		if(top) cout<<stk[top]<<' ';
		else cout<<-1<<' ';
		stk[++top] = a[i];
	}
	return 0;
}
