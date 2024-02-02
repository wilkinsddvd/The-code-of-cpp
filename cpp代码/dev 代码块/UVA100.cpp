#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,m,ans = 1,x = 1,s;
	while(cin>>n>>m)
	{
		ans=1;
		cout<<n<<" "<<m<<" ";
		if(n>m) swap(n,m);
		for(int i=n;i<=m;i++)
		{
			s=i;x=1;
			while(s!=1)
			{
				if(s%2 == 0) s/=2,x++;
				else s = s*3+1,x++;
			}
			ans = max(ans,x);
		}
		cout<<ans<<endl;
	}
	return 0;
}
