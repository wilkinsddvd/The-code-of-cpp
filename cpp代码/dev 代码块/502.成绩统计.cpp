#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int a[N];

int main(){
	double jige=0,youxiu=0,n,result1,result2;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=85){
			youxiu++;
			jige++;
		}else if(a[i]>=60 && a[i]<85){
			jige++;
		}else{
			jige = jige;
			youxiu = youxiu;
		}
	}
	result1 = jige/n * 100;
	result2 = youxiu/n * 100;
	cout<<fixed<<setprecision(0)<<result1<<"%"<<endl;
	cout<<fixed<<setprecision(0)<<result2<<"%";
	return 0;
}
