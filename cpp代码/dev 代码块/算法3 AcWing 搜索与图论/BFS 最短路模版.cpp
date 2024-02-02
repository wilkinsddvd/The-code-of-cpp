queue<int> q;
st[1] = true;
q.push(1);

while(q.size()){
	int t = q.front();
	q.pop();
	
	for(int i = h[t];i!=-1;i = ne[i]){
		int j = e[i];
		if(!st[j]){
			st[j] = true;
			q.push(j);
		}
	}
}
