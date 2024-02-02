#include<iostream>
using namespace std;

int m,n;
int r=0;

int main()
{
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if(i%2!=0)
			r+=i;
	}
	cout<<r<<endl;
}
