#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[110],sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int w,x,y,z;
		w=a[i]%10;
		x=(a[i]%100-w)/10;
		y=(a[i]%1000-w-10*x)/100;
		z=a[i]/1000;
		if(w-x-y-z>0)
			sum++;
	}
	cout<<sum<<endl;
	return 0;
}
