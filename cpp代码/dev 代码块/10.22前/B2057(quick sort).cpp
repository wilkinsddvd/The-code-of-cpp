#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int a[110];
	cin>>n;
	for(int i=1;i<n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	cout<<a[n];
	return 0;
}
