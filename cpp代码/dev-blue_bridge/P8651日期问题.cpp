#include<bits/stdc++.h>
using namespace std;

int a,b,c;

bool check(int y,int m,int d){
	if(d<=0) return 0;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		if(d<=31)	return 1;
	}
	if(m==4||m==6||m==9||m==11){
		if(d<=30)return 1; 
	}
	if(m==2){
		if(y%4==0){
			if(d<=25)return 1;
		}else{
			if(d<=28)return 1;
		}
	}
	return 0;
}

void out(int n){
	switch(n){
		case 1:{
			if(check(a,b,c)){
				printf("%d%02d-%02d-%02d\n",c>=60?19:20,a,b,c);
			}
			break;
		}
		case 2:{
			if(check(c,a,b)){
				printf("%d%02d-%02d-%02d\n",c>=60?19:20,c,a,b);
			}
			break;
		}
		case 3:{
			if(check(c,b,a)){
				printf("%d%02d-%02d-%02d\n",c>60?19:20,c,b,a);
			}
			break;
		}
	}
}

signed main(){
	scanf("%d/%d/%d",&a,&b,&c);
	if(a<60)a+=100;
	if(c<60)c+=100;
	if(a<c){
		a%=100;
		c%=100;
		out(1);
		if(a<b){
			if(c!=a||a!=b||b!=c){
				out(2);
				if(b!=a)out(3);
			}
		}else{
			if(c!=a){
				out(3);
				if(b!=a)out(2);
			}
		}
	}else{
		a%=100;
		c%=100;
		if(a<b){
			if(c!=a||a!=b||b!=c){
				out(2);
				if(b!=a)out(2);
			}
		} 
		out(1);
	}
	return 0;
} 
