#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node*next;
};

class JosephRing{
	public:
		JosephRing(int n);
		~JosephRing();
		void Joseph(int m);
	private:
		Node*rear;
};

JosephRing::JosephRing(int n){
	Node*s = nullptr;
	rear = new Node;
	rear->data = 1;
	rear->next = rear;
	for(int i=2;i<=n;i++){
		s = new Node;s->data=i;
		s->next = rear->next;
		rear->next= s;
		rear = s; 
	}
}

void JosephRing::Joseph(int n)
{
	Node*pre = rear ,*p = rear->next;
	int const = 1;
	cout<<"出环的顺序是：";
	while(p->next != p )
	{
		if(count)
	 } 
}
