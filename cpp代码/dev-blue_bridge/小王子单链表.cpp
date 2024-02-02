//运行存在问题，输出为即时输出，要求延时输出 

#include<bits/stdc++.h>
using namespace std;

typedef struct LNode{
	int data;
	LNode *next;
}LNode,*LinkList;

LinkList LookElem(LinkList L,int num){
	LNode *p = L;
	LNode *q;
	while(p->next){
		if(p->next->data==num){
			q=p->next;
			p->next = q->next;
			delete(q);
			LNode *s = new LNode;
			s->data=num;
			s->next = L->next;
			L->next = s;
			return L;
		}
		p = p->next;
	}
	return L;
}

void getNList(LinkList L){
	LNode *p = L;
	while(p->next){
		p=p->next;
		cout<<p->data<<"   ";
	}
	cout<<endl; 
}

int main(){
	LinkList LookElem(LinkList L,int num);
	void getNList(LinkList L);
	LinkList L;
	LNode *p,*s;
	s = new LNode;
	s->next = NULL;
	L = s;
	p = L;
	for(int i=1;i<=10;i++){
		s= new LNode;
		s->data = i;
		s->next = NULL;
		p->next = s;
		p = p->next;
	}
	int count = 0;
	int num = 0;
	cin>>count;
	while(count>0){
		cin>>num;
		L = LookElem(L,num);
		getNList(L);
		count--;
	}
	return 0;
}
