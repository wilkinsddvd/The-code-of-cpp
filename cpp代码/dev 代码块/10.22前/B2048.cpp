#include<iostream>
using namespace std;

int main()
{
	int n,ans=8;
	char c;
	cin>>n>>c;
	if(c=='y') ans+=5;
	n-=1000;
	while(n>0)
	{
		n-=500;
		ans+=4;
	}
	cout<<ans<<endl;
	return 0;
}
