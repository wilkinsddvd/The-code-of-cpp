#include<bits/stdc++.h>
using namespace std;

inline int read(){
	int x = 0,f = 1;
	char ch = getchar();
	while(!isdigit(ch)){
		if(ch == '-')
			f = -1;
			ch = getchar();
	}
	while(isdigit(ch)){
		x = x*10 + ch - 48;
		ch = getchar();
	}
	return x*f;
}

int n,a[300050];

struct Seg_Tree
{
	int l,r;
	int tag,val,minv;
}t[1200050];

