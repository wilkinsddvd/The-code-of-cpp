#include<iostream>
using namespace std;

typedef int DataType;
typedef struct node{
	DataType data;
	node* next;
}node;

node*first;
int length;

void init()
{
	first=new node;
	first->next=NULL;
	node* rear=first;
	cin>>length;
	for(int i=0;i<length;++i)
	{
		DataType elem;
		cin>>elem;
		node* s=new node;
		s->data=elem;
		s->next=NULL;
		rear->next=s;
		rear=s;
	}
} 

void reverseList()
{
	if(first->next==NULL||first->next->next==NULL)
	{
		return;
	}
	node*pre=first->next;
	node*cur=pre->next;
	pre->next=NULL;
	while(cur!=NULL)
	{
		node*temp=cur->next;
		cur->next=pre;
		pre=cur;
		cur=temp;
	}
	first->next=pre;
}

void show()
{
	node* p=first->next;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

int main()
{
	init();
	reverseList();
	show();
	return 0;
}
