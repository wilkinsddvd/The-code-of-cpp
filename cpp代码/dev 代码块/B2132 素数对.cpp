#include<bits/stdc++.h>
using namespace std;

int n;

bool prime(int x){
	if(x==1) return false;
	if(x==2) return true;
	int j=2;
	while(j*j<=x && x%j!=0) 
		j++;
	if(x%j == 0) return false;
	else
		return true;
} 

bool pd = true;

int main(){
	cin>>n;
	for(int i=3;i<=n;i++)
	{
		if(prime(i) && prime(i-2)){
			cout<<i-2<<" "<<i<<endl;
			pd = false;
		}
	}
	if(pd) cout<<"empty"<<endl;
	return 0;
}


