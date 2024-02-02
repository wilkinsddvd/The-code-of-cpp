#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,c,d,b,e=0,f=0,g=0;
	cin>>a;
	for(int i=0;i<a;++i)
	{
		cin>>c>>d>>b;
		e+=c;
		f+=d;
		g+=b;
	}
	cout<<e<<" "<<f<<" "<<g<<" "<<e+f+g;
	return 0; 
}
