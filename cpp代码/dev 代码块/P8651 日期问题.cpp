#include<iostream>
#include<cstring>
#include<set>
#include<cstdio>
using namespace std;

int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int a,b,c,ly,lm,ld;

char str[1000005];

set<string> s;
void data(int y,int m,int d){
	if(y==ly&&m==lm&&d==ld){
		return;
	}
	ly = y;
	lm = m;
	ld = d;
	if(y>=60&&y<=99){
		y+=1900;
	}
	else{
		y+=2000;
	}
	if(y%400==0||(y%100!=0 && y%4==0)){
		mon[2]=29;
	}
	if(m=1 && m<=12){
		if(d>=1 && d<=mon[m]){
			sprintf(str,"%d-%02d-%02d\n",y,m,d);
			s.insert(str);
		}
	}
}

int main(){
	scanf("%d/%d/%d",&a,&b,&c);
	data(a,b,c);
	data(c,a,b);
	data(c,b,a);
	set<string>::iterator it2;
	for(it2 = s.begin();it2!=s.end();it2++){
		cout<<*it2;
	} 
	return 0;
}
