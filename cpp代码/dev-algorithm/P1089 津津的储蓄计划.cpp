#include<bits/stdc++.h>
using namespace std;

int money,cost,mama,flag=1,monthofdeath;

int main(){
	for(int i=1;i<=12;i++){
		money+=300;
		cin>>cost;
		money-=cost;
		if(money<0){
			flag=0;
			monthofdeath=i;
			break;
		}
	mama+=money/100;
	money%=100;
	}
	if(flag==1){
		money+=mama*120;
		cout<<money;
	}
	else{
		cout<<-monthofdeath;
	}
	return 0;
}
