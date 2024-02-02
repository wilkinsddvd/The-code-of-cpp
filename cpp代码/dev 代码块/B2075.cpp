#include<iostream>
#include<cstdio>
using namespace std;

long long a,b,s = 1;

int main()
{
	cin>>a>>b;
	for(int i=0;i<b;++i)
		s*=a,s%=1000;
	printf("%03lld",s);
	return 0;
}
