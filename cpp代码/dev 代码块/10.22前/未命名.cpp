#include<bits/stdc++.h>

using namespace std;
bool f;
int main()
{
	int k;
	cin>>k;
	for(int i=10000;i<=30000;i++)
	{
		if(i/100%k==0)
			if((i/10-i/10000*1000)%k==0)
				if((i-i/1000*1000)%k==0) cout<<i<<endl,f=1;
	}
	if(!f) cout<<"No";
	return 0;
}
