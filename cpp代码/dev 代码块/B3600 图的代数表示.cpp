//有问题的代码，过不了，个别图第一行会莫名空格，看讨论好像是特判的问题。。。但是目前不知道是哪个特判出问题了 
#include<bits/stdc++.h>
using namespace std;

#define MAXN 305

int n,m,u,v,d;
int a[MAXN][MAXN],b[MAXN][MAXN];

vector<int>c1[MAXN];
vector<pair<int,int> >c2[MAXN];
vector<int>c3[MAXN];
vector<pair<int,int> >c4[MAXN];

int A[MAXN],B[MAXN<<1],num,Z[MAXN<<1];

bool type1,type2,f1,f2;

void work1(){
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cout<<a[i][j]<<" ";
		}cout<<endl;
	}
} 

void work2(){
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cout<<b[i][j]<<" ";
		}cout<<endl;
	}
}

void work3(){
	if(type2==0){
		for(int i=1;i<=n;++i){
			for(int j=0;j<c1[i].size();++j){
				cout<<c1[i][j]<<" ";
			}cout<<endl;
		}
	}else{
		for(int i=1;i<=n;++i){
			for(int j=0;j<c2[i].size();++j){
				cout<<c2[i][j].first<<" "<<c2[i][j].second<<" "; 
			}cout<<endl;
		}
	}
}

void work4(){
	num=0,A[1]=1;
	if(type2==0){
		for(int i=2;i<=n+1;++i){
			A[i] = A[i-1] + c1[i-1].size();
		}
		for(int i=1;i<=n;++i){
			for(int j=0;j<c1[i].size();++j){
				B[++num] = c1[i][j];
			}
		}
		for(int i=1;i<=n+1;++i){
			cout<<A[i]<<" ";
		}cout<<endl;
		for(int i=1;i<=num;++i){
			cout<<B[i]<<" ";
		}cout<<endl;
	}else{
		for(int i=2;i<=n+1;++i){
			A[i] = A[i-1] + c2[i-1].size(); 
 		}
		for(int i=2;i<=n+1;++i){
			for(int j=0;j<c2[i].size();++j){
				B[++num] = c2[i][j].first;
				Z[num] = c2[i][j].second;
			}
		}
		for(int i=1;i<=n+1;++i){
			cout<<A[i]<<" ";
		}cout<<endl;
		for(int i=1;i<=num;++i){
			cout<<B[i]<<" ";
		}cout<<endl;
		for(int i=1;i<=num;++i){
			cout<<Z[i]<<" ";
		}cout<<endl;
	}
}

void work5(){
	num = 0,A[1]=1;
	if(type2 == 0){
		for(int i=2;i<=n+1;++i){
			A[i] = A[i-1]+ c3[i-1].size();
		}
		for(int i=1;i<=n;++i){
			for(int j=0;j<c3[i].size();++j){
				B[++num] = c3[i][j];
			}
		}
		for(int i=1;i<=n+1;++i){
			cout<<A[i]<<" ";
		}cout<<endl;
		for(int i=1;i<=num;++i){
			cout<<B[i]<<" ";
		}cout<<endl;
	}else{
		for(int i=2;i<=n+1;++i){
			A[i] = A[i-1] + c4[i-1].size();
		}
		for(int i=1;i<=n;++i){
			for(int j=0;j<c4[i].size();++j){
				B[++num] = c4[i][j].first;
				Z[num] = c4[i][j].second;
			}
		}
		for(int i=1;i<=n+1;++i){
			cout<<A[i]<<" ";
		}cout<<endl;
		for(int i=1;i<=num;++i){
			cout<<B[i]<<" "; 
		}cout<<endl;
		for(int i=1;i<=num;++i){
			cout<<Z[i]<<" ";
		}cout<<endl;
	}
}

int main(){
	cin>>n>>m>>type1>>type2;
	if(type2 == 0){
		for(int i=1;i<=m;++i){
			cin>>u>>v;
			if(a[u][v]>0) f1 = 1;
			if(u==v) f2 = 1;
			if(type1 == 0){
				a[u][v] = 1;
				a[v][u] = 1;
				b[u][i] = 1;
				b[v][i] = 1;
				c1[u].push_back(v);
				c1[v].push_back(u); 
			}else{
				a[u][v] = 1;
				b[u][i] = 1;
				b[v][i] = -1;
				c1[u].push_back(v);
				c3[v].push_back(u);
			}
		}
		if(f1==0) work1();
		if(f2==0) work2();
		work3();
		work4();
		if(type1 == 1) work5();
	}else{
		for(int i=1;i<=m;++i){
			cin>>u>>v>>d;
			if(a[u][v] > 0) f1 = 1;
			if(type1 == 0){
				a[u][v] = d;
				a[v][u] = d;
				c2[u].push_back(make_pair(v,d));
				c2[v].push_back(make_pair(u,d));
			}else{
				a[u][v] = d;
				c2[u].push_back(make_pair(v,d));
				c4[v].push_back(make_pair(u,d));
			}
		}
		if(f1 == 0) work1();
		work3();
		work4();
		if(type1 == 1) work5();
	}
	return 0;
}
