#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,ans=0;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			cin>>c;
			if((i==1||i==a)||(j==1||j==b))
				ans+=c;
		}
	}
	cout<<ans<<endl;
	return 0;
}
