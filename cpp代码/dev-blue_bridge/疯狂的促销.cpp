#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,price,sum=0,ans;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>price;
		if(price==0){
			ans=price;
		}
		if(price>0&&i<500){
			ans=price-floor(price/20);
		}
		if(price>=500&&i<1000){
			ans=price-floor(price/10);
		}
		if(price>=1000&&price<1500){
			if(price==1111){
				ans=0;
			}
			else{
				ans=price-150;
			}
		}
		if(price>=1500){
			ans=price-floor(price/10);
		}
		sum+=floor(ans);
	}
	cout<<sum;
	return 0;
} 
