#include<iostream>
using namespace std;
int num[5],ans=0;
int main()
{
	for(int i = 0;i<5;i++) cin>>num[i];
	for(int i = 0;i<5;i++)
	{
		int t = num[i]/3;
		if(i==0) num[4]+=t;
		else num[i-1]+=t;
		if(i==4) num[0]+=t;
		else num[i+1]+=t;
		ans+=num[i]%3;
		num[i]=t;
	}
	for(int i=0;i<5;i++)cout<<num[i]<<" ";
	cout<<endl<<ans<<endl;
	return 0;
 } 
