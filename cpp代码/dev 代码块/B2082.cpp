#include<bits/stdc++.h>
using namespace std;

int L,R,c,d,ans,i;

int main(){
	cin>>L>>R;
	for(i=L;i<=R;i++){
		c=i;
		while(c!=0){
			d = c%10;
			c = c/10;
			if(d==2)
				ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
