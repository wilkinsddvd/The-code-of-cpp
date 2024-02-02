#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

int main(){
	int n,m;
	cin>>n>>m;
	node *head,*p,*now,*prev;
	head = new node;
	head->data = 1; head->next = NULL;
	now = head;
	for(int i=2;i<=n;i++){
		p = new node;
		p->data = i;
		p->next = NULL;
		now->next = p; // 把申请的新节点连到前面的链表上 
		now = p;       // 尾指针后移一个 
	}
	now->next = head;  // 尾指针指向头 循环列表建立完成
	// 以上为建立列表 
	now = head,prev = head;
	while((n--)>1){
		for(int i = 1;i<m;i++){
			prev = now;
			now = now->next;
		}
		cout<<now->data<<" ";
		prev->next = now->next;
		delete now;
		now = prev->next;
	}
	cout<<now->data<<" ";
	delete now;
	return 0;
}
