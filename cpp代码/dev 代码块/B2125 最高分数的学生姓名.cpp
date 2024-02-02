#include<bits/stdc++.h>
using namespace std;

struct node{
	string name;
	int score;
}a[105];

int n,i;

bool cmp(node c,node b)
{
	return c.score>b.score;
}

int main(){
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i].score>>a[i].name;
	}
	sort(a+1,a+1+n,cmp);
	cout<<a[1].name;
	return 0;
}
