#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n;
	float s,x;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		s=s+x;
	}
	s=s/n;
	printf("%.4f",s);
	return 0;
}
