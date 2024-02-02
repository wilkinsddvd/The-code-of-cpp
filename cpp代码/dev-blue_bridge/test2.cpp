#include<bits/stdc++.h>
using namespace std;

int main(){	
	int cnt,all,q;
	for(int i=0;i<4;i++){
		for(int p=1900;p<9999;p++)
			q=p;
			all=q/1000+q/100%10+q/10%10+q%10;
			for(int j=1;j<=12;j++){
				for(int k=1;k<=31;k++){
					if(all==j+k){
						cnt++;
					}
			}
		}
	} 
	cout<<cnt;
}
//µÚÈýÌâ 
///
//
//
//
//
