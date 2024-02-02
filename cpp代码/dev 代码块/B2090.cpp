#include<bits/stdc++.h>
using namespace std;

int N,n;
double cnt1=0,cnt2=0,cnt3=0,cnt4=0;
double ans1,ans2,ans3,ans4;

int main(){
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>n;
		if(n<=18 && n>=0){
			cnt1++;
			ans1 = cnt1/N;
		}
		if(n>18 && n<=35){
			cnt2++;
			ans2 = cnt2/N;
		}
		if(n>35 && n<=60){
			cnt3++;
			ans3 = cnt3/N;
		}
		if(n>60){
			cnt4++;
			ans4 = cnt4/N;
		}
	}
	cout<<fixed<<setprecision(2)<<ans1*100<<"%"<<endl;
	cout<<fixed<<setprecision(2)<<ans2*100<<"%"<<endl;
	cout<<fixed<<setprecision(2)<<ans3*100<<"%"<<endl;
	cout<<fixed<<setprecision(2)<<ans4*100<<"%"<<endl;

}
