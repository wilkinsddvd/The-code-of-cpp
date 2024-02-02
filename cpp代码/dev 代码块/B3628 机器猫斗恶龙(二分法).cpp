//代码有问题，输出不出来，不知道卡在数组太大，还是二分算法内部有问题 

#include<bits/stdc++.h>
using namespace std;

int n,m,ans,l=1,r;
int a[10000];

bool erb(int x){
	bool bc = true;
	if(x<=0){
		bc = false;
	}
	for(int i=0;i<n;i++){
		x+=a[i];
		if(x<=0){
			bc = false;
		}
	}
	return bc;
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	r = 1e8;
	ans = 0;
	while(l<=r){
		m = l + (r-l)/2;
		while(l)
		if(erb(m)){
			r = m-1;
			ans = m;
		}else{
			l=m+1;
		}
	}
	cout<<ans;
	return 0;
}
