#include<bits/stdc++.h>
using namespace std;

struct Node{
	int coef,exp;
	Node *next;
};

class Polynomial{
public:
	Polynomial();
	Polynomial(const Polynomial &B);
	~Polynomial();
	Polynomial operator+(Polynomial &B);
	void Print();
private:
	Node *first;		
};

Polynomial::Polynomial(){
	Node *r = nullptr,*s = nullptr;
	int coef,exp;
	first = new Node;
	r = first;
	cout<<"请输入系数和指数";
	cin>>coef>>exp;
	while(coef!=0){
		s = new Node;
		s->coef = coef; s->exp = exp;
		r->next = s; r = s;
		cout<<"请输入系数和指数:";
		cin>>coef>>exp; 
	}
	r->next = nullptr;
}

Polynomial::Polynomial(const Polynomial &B){
	first = B.first;
}

Polynomial Polynomial::operator+(Polynomial &B){
	Node *pre = first,*p = pre->next;
	Node *qre = B.first,*q = qre->next;
	Node *qtemp = nullptr;
	while(p != nullptr && q!=nullptr)
	{
		if(p->exp < q->exp){
			pre = p; p = p->next; 
		}
		else if(p->exp > q->exp){
			qtemp = q->next;
			pre ->next = q;
			q->next = p;
			pre = q;
			q = qtemp;
			pre->next = q;
		}
		else{
			p->coef = p->coef + q->coef;
			if(p->coef == 0){
				pre->next = p->next;
				delete p;
				p = pre->next;
			}else{
				pre = p; p = p->next;
			}
			qre->next = q->next;
			delete q;
			q = qre->next; 
		}
	}
	if(q!=nullptr) pre->next = q;
	return *this;
}

void Polynomial::Print(){
	Node *p = first->next;
	if(p!=nullptr)
		cout<<p->coef<<"x"<<p->exp;
	p = p->next;
	while(p != nullptr){
		if(p->coef > 0)
			cout<<"+"<<p->coef<<"x"<<p->exp;
		else
			cout<<p->coef<<"x"<<p->exp;
		p=p->next; 
	}
}

int main(){
	Polynomial A{ },B{ };
	A.Print(); B.Print();
	A = A + B;
	cout<<"结果是:";
	A.Print();
	return 0;
}
