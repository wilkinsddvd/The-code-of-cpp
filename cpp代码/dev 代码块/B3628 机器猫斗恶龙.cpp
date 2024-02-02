#include<iostream>
using namespace std;

int a,n,sum=1,add=0;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a<0){
			if(add == 0) {sum+=0-a;}
			else if(add != 0 && add >0-a){add+=a;}
			else{int x = a+add;add = 0;sum -= x;}
		}else if(a>=0){
				add += a;
		}
	}
	cout<<sum;
	return 0;
}
