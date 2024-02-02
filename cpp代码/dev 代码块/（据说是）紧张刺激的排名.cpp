#include<iostream>
#include<iomanip>

using namespace std;

struct st{
	int t;
	long long d;
}s[1001],ta;

int main(){
	int T,n,i,j;
	cin>>T;
	while(T--){
		cin>>n;
		for(i=1;i<=n;i++){
			scanf("%lld %d",&s[i].d,&s[i].t);
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=n-i;j++){
				if(s[j].t<s[j+1].t)
				{
					ta = s[j];
					s[j] = s[j+1];
					s[j+1] = ta;	
				} 
			}
		}
		for(i=1;i<=n;i++){
			printf("%lld %d\n",s[i].d,s[i].t); 
		}
	}
	return 0;
}
