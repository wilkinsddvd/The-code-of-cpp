#include<iostream>
#include<cstring>
#include<cstdio> 
#define re register
#define FOR(i,l,r) for(re int i=l;i<=r;++i)
using namespace std;

int a[200001],i,h1,h2,s=0,m,l,j;

inline void in(re int &x){
    x=0;char c=getchar();
    while(c<'0'||c>'9'){
        c=getchar();
    }
    while(c<='9'&&c>='0'){
        x=(x<<1)+(x<<3)+(c^'0');
        c=getchar();
    }
}

inline void out(re int a){
    if(a>=10)out(a/10);
    putchar(a%10+'0');
}

int main(){
    in(l),in(m); 
    FOR(i,1,m){
    	in(h1),in(h2);
    	FOR(j,h1,h2)
          a[j]=1;
    }
	FOR(i,0,l)  
      if(a[i]==0)
        ++s;
    out(s);
    puts("");    
}
