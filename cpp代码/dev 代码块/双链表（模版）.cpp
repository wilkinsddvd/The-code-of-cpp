const int N = 100010;
int e[N],l[N],r[N],idx;

void init()
{
	r[0] = 1,l[1] = 0,idx = 2;
}

void insert(int k,int x)
{
	e[idx] = x;
	l[idx] = k;
	r[idx] = r[k];
	l[r[k]] = idx;
	r[k] = idx++;
}

void remove(int k){
	r[l[k]] = r[k];
	l[r[k]] = l[k];
}
