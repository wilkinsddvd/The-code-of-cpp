#include<cstdio>
using namespace std;
int ans7(int yd1,int n1,int k1)
{
	int ans1=0;
	ans1+=n1;
	yd1+=n1;
	while(yd1>=k1)
	{
		yd1-=k1;
		ans1++;
		yd1++;
	}
	return ans1;
}
int main()
{
	int ans=0,n,k,yd=0;
	scanf("%d",&n);
	scanf("%d",&k);
	ans = ans7(yd,n,k);
	printf("%d",ans);
	return 0;
}
