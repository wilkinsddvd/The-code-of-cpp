#include<bits/stdc++.h>
using namespace std;
int Cnt,Ans,d1,d2,d3,x,y,z,L,R,X,Y,Z,tot,a[5];
struct lc{
	int x,y,z,tot;
}A,B; 

inline int read(){
	int ret=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-') f=-f;ch=getchar();}
	while(ch<='9'&&ch>='0') ret=ret*10+ch-'0',ch=getchar();
	return ret*f;
}
inline void Dfs(int x,int y,int z){
	tot=0;
	while(1){
		d1=y-x,d2=z-y;
		if(d1==d2) break;
		if(d1>d2) d3=(d1-1)/d2,tot+=d3,y-=d3*d2,z-=d3*d2;
		else d3=(d2-1)/d1,tot+=d3,x+=d3*d1,y+=d3*d1;
	}
	if(A.x||A.y) B=(lc){x,y,z,tot};
	else A=(lc){x,y,z,tot}; 
} 

inline void Swap(){
	swap(x,X),swap(y,Y),swap(z,Z);
	swap(A.x,B.x),swap(A.y,B.y),swap(A.z,B.z),swap(A.tot,B.tot);
}

inline bool check(int T,int x,int y,int z,int X,int Y,int Z){
	tot=T;
	while(tot){
		d1=y-x,d2=z-y;
		if(d1==d2) break;
		if(d1>d2) d3=min((d1-1)/d2,tot),tot-=d3,y-=d3*d2,z-=d3*d2;
		else d3=min((d2-1)/d1,tot),tot-=d3,x+=d3*d1,y+=d3*d1;
	}
	tot=T;
	while(tot){
		d1=Y-X,d2=Z-Y;
		if(d1==d2) break;
		if(d1>d2) d3=min((d1-1)/d2,tot),tot-=d3,Y-=d3*d2,Z-=d3*d2;
		else d3=min((d2-1)/d1,tot),tot-=d3,X+=d3*d1,Y+=d3*d1; 
	}
	return X==x&&Y==y&&Z==z;
}

int main(){
	for(int i=1;i<=3;i++) a[i]=read();
	sort(a+1,a+4);x=a[1],y=a[2],z=a[3];
	for(int i=1;i<=3;i++) a[i]=read();
	sort(a+1,a+4);X=a[1],Y=a[2],Z=a[3];
	Dfs(x,y,z);Dfs(X,Y,Z);
	if(A.x!=B.x||A.y!=B.y||A.z!=B.z){printf("No");return 0;}
	if(A.tot<B.tot)  Swap();
	Ans=tot=A.tot-B.tot;
	while(tot){
		d1=y-x,d2=z-y;
		if(d1==d2) break;
		if(d1>d2) d3=min((d1-1)/d2,tot),tot-=d3,y-=d3*d2,z-=d3*d2;
		else d3=min((d2-1)/d1,tot),tot-=d3,x+=d3*d1,y+=d3*d1;
	}
	L=0,R=B.tot;
	while(L<=R){
		int mid=L+R>>1;
		if(check(mid,x,y,z,X,Y,Z)) Cnt=mid,R=mid-1;
		else L=mid+1;
	}
	printf("YES\n%d",Ans+Cnt*2);
	return 0;
}
