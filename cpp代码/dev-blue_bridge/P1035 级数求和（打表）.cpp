//#include<bits/stdc++.h>
//using namespace std;

//int f(int k){
//	double i=1,s=0;
//	while(s<=k){
//		s=s+1/i;
//		i++;
//	}
//	return i-1;
//}

//int main(){
//	for(int i=1;i<=15;i++){
//		cout<<f(i)<<',';
//	}
//}

#include<bits/stdc++.h>
using namespace std;
int a[]={2,4,11,31,83,227,616,1674,4550,12367,33617,91380,248397,675214,1835421},k;
int main(){
	cin>>k;
	cout<<a[k-1];
}
