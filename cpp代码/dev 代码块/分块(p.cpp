#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath> 
#define maxn 500010
#define re register
#define FOR(i,l,r) for(re int i=l;i<=r;++i)
using namespace std;

int n,m,c,r,t,x,y,z,sq,anss;
int a[maxn],b[maxn],tag[maxn],ans[maxn];

inline void in(int &x){
    x=0;char c=getchar();
    while(c<'0'||c>'9'){
        c=getchar();
    }
    while(c<='9'&&c>='0'){
        x=(x<<1)+(x<<3)+(c^'0');
        c=getchar();
    }
}

inline void out(int a){
    if(a>=10)out(a/10);
    putchar(a%10+'0');
}

void doit(int x,int y){
	if(tag[b[x]]!=1)
	  FOR(i,x,min(y,b[x]*sq))
	    ans[b[x]]-=a[i],a[i]=0;
	if(b[x]!=b[y]&&tag[b[y]]!=1)
	  FOR(i,(b[y]-1)*sq+1,y)
	    ans[b[y]]-=a[i],a[i]=0;
	FOR(i,b[x]+1,b[y]-1)
	  tag[i]=1,ans[i]=0;
}

int main(){
	in(n),in(m);
	sq=sqrt(n);
	FOR(i,0,n)
	  a[i]=1,b[i]=(i-1)/sq+1,++ans[b[i]];
	FOR(i,1,m){
		in(x),in(y);
		doit(x,y);
	}
	FOR(i,1,b[n])
	  anss+=ans[i];
	out(anss);
	puts("");
} 
