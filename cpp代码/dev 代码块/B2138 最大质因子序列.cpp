#include<bits/stdc++.h>
using namespace std;

int fun(int i){
	for(int j=i;;j--){
		if(i%j==0){
			bool flag =1;
			for(int k=2;k<=sqrt(j);k++)
				if(j%k==0){
					flag = 0;
					break;
				}
			if(flag){
				return j;
			}
		}
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=n;i<=m;i++)
		if(i==m)
			cout<<fun(i);
		else
			cout<<fun(i)<<",";
	return 0;
}
