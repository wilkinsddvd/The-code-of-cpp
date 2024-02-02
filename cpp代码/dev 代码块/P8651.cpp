#include <bits/stdc++.h>
using namespace std;

int d[]={0,31,28,31,30,31,30,31,31,30,31,30,31};//每月日期 

bool isrun(int x){//判断闰年 
	if(x%4) return false;
	else{
		if(x%100) return true;
		else{
			if(x%400) return false;
			else return true;
		}
	}
} 

int a,b,c;

bool isok(int y,int m,int d){//判断三种情况 
	int p=y%100;
	if(p==a && m==b && d==c) return true;
	if(p==c && m==a && d==b) return true;
	if(p==c && m==b && d==a) return true;
	return false;
}

void print(int y,int m,int d){//输出 
	cout<<y<<"-";
	if(m<=9) cout<<"0";
	cout<<m<<"-";
	if(d<=9) cout<<"0";
	cout<<d<<endl;
}

int main(){
	char ch;//分隔符 
	cin>>a>>ch>>b>>ch>>c;
    //scanf("%d/%d/%d",&a,&b,&c);
    for(int i=1960; i<=2059; i++){//年
    	if(isrun(i)) d[2]++;//闰年 2 月有 29 天，即比平常多 1 天 
        for(int j=1; j<=12; j++){//月
            for(int k=1; k<=d[j]; k++){//日
                if(isok(i,j,k)){
                	print(i,j,k);
                	//printf("%d-%02d-%02d\n",i,j,k);
				}
            }
        }
    }
    return 0;
}
