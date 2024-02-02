#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;

int bfs(string start){
	//终止状态
	string end = "12345678x";
	// 哈希表存储距离
	unordered_map<string,int> d;
	// 初始化距离
	d[start] = 0;
	queue<string> q;
	q.push(start);
	
	int dx[4] = {-1,0,1,0},dy[4] = {0,1,0,-1};
	
	while(q.size()){
		auto t = q.front();
		q.pop();
		
		int distance = d[t];
		//到达终止距离就返回 
		if(t == end) return distance;
		
		int k = t.find('x');
		int x = k/3,y = k%3;
		
		for(int i=0;i<4;i++){
			int a = x + dx[i],b = y + dy[i];
			if(a>=0 && a<3 && b >= 0 && b<3){
				// 下一步的状态
				swap(t[k],t[a*3+b]);
				if(!d.count(t)){
					// 更新距离
					d[t] = distance + 1;
					q.push(t); 
				}
				// 返回前一步
				swap(t[k],t[a*3+b]); 
			}
		}
	} 
	return -1;
}

int main(){
	string start;
	
	for(int i=0;i<9;i++){
		char c;
		cin>>c;
		start += c;
	}
	
	cout<<bfs(start)<<endl;
	return 0;
}
