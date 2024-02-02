int n;							// 总点数 
int h[N],w[N],e[N],ne[N],idx;	// 邻接表存储所有边 
int dist[N];					// 存储每个点到1号点的最短距离 
bool st[N];						// 存储每个点是否在队列中 

// 求1号点到n号点的最短路距离
int spfa(){
	memset(dist,0x3f,sizeof dist);
	dist[1] = 0;
	queue<int>q;
	q.push(1);
	st[1] = true;
	while(q.size()){
		// 拿更新过的边去更新别的边
		auto t = q.front();
		q.pop();
		
		st[t] = false;
		
		for(int i=h[t];i!=-1;i=ne[i]){
			int j = e[i];
			if(dist[j]>dist[t]+w[i]){
				dist[j] = dist[t] + w[i];
				if(!st[j]){ // 如果队列中已存在j，则不需要将j重新插入
					q.push(j); 
 					st[j] = true;
				} 
			}
		} 
	}
	
	// 不存在最短路径
	if(dist[n] == 0x3f3f3f3f) f = true;
	return dist[n]; 
} 
