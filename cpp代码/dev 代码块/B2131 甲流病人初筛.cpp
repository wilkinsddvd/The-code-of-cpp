#include<bits/stdc++.h>
using namespace std;

 int n,cough,ans;
 string name;
 double temp;
 
 int main(){
 	cin>>n;
 	for(int i=1;i<=n;i++)
 	{
 		cin>>name>>temp>>cough;
 		if(temp>=37.5&&cough)
 		{
 			cout<<name<<endl;
			ans++; 
		 }
	 }
	 cout<<ans<<endl;
	 return 0;
 }
