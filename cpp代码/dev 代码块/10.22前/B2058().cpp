#include<bits/stdc++.h>
#define up(l,r,i) for(int i=1,END##i=r;i<=END##i;++i)
#define dn(r,l,i) for(int i=r,END##i=l;i>=END##i;--i)
using namespace std;

typedef long long i64;
const int INF =2147483647;
struct Medal{
	int Au,Ag,Cu;
	Medal(int _Au=0,int _Ag=0,int _Cu=0)
	{
		Au=_Au,Ag=_Ag,Cu=_Cu;
	}
	Medal operator+(Medal t){
		return Medal(Au+t.Au,Ag+t.Ag,Cu+t.Cu);
	}
}tot;

int n;
int main()
{
	scanf("%d",&n); up(1,n,i){
		int a,b,c; scanf("%d%d%d",&a,&b,&c); tot=tot+Medal(a,b,c);
	}
	printf("%d %d %d %d\n",tot.Au,tot.Ag,tot.Cu,tot.Au+tot.Ag+tot.Cu);
	return 0;
}
