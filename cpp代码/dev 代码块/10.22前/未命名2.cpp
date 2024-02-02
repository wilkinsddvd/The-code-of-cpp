#include<iostream>

using namespace std;

int main()
{
	int n;
	int i,j;
	cin>>n;
	int a[i];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maxn=0;
	for(i = 0;i<n-1;i++)
	{
		int s=0;
		for(j = i+1;j<n;j++)
		{
			if(a[j]==a[j-1]+1)
			{
				s++;
			}
			else
				break;
		}
		maxn=max(maxn,s);
	}
	cout<<maxn+1;
	return 0;
}
