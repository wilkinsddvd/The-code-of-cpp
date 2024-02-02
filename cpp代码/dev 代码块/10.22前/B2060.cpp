#include<iostream>
using namespace std;

int m,n,r;

int main()
{
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if(i%17==0)
			r+=i;
	}
	cout<<r<<endl;
	return 0; 
}
