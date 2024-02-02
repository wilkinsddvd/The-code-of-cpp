#include<bits/stdc++.h>
using namespace std;

int a[13];
int b[13];
int start_money=300;
int save_money=0;
int error=0;
int result1;

int main(){
	int n;
	for(int i=1;i<=12;i++){
		cin>>a[i];
		b[i]=a[i];
		start_money = start_money-a[i];
		if(start_money<0){
			error++;
			result1=i;
			while(error==1){
				cout<<"-"<<i;
				break;
	}
		}
		else{
			if(start_money%100!=0){
				save_money = save_money + start_money%100 * 100;
				start_money = start_money - (start_money%100 * 100);
			}
		} 
		start_money = start_money+300;
	}

	if(error==0){
		cout<<save_money*(1+0.2)<<endl;
	}
	return 0;
}
