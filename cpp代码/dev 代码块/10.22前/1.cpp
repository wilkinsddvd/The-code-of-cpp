#include<iostream>

using namespace std;

#define MAXSIZE 100

typedef int ElemType;
typedef struct Node;
{
	ElemType data;
	int cur;
}

bool InitList(StaticLinkList array)
{
	cout<<"InitList..."<<endl;
	for(int i=0;i<MAXSIZE-2;i++)
	{
		array[i].cur = i+1;
	}
	array[MAXSIZE-1].cur = 0;
	return true;
}

int MAlloc_SLL(StaticLinkLIst array)
{
	int k =array[0].cur;
	if(k)
		array[0].cur = array[k].cur;
	
	return k;
}

void Free_SLL(StaticLinkList array,int pos)
{
	array[pos].cur = array[0].cur;
	array[0].cur = pos;
}

int ListLength(StaticLinkList array)
{
	int i = array[MAXSIZE-1].cur;
	int j = 0;
	while(i)
	{
		i = array[i].cur;
		++j;
	}
	return j;
}

bool ListInsert(StaticLinkList array,int pos,ElemType Elem)
{
	cout<<"Insert List from pos:"<<pos<<"Item"<<Elem<<endl;
	if(pos<1||pos > ListLength(array)+1)
		return false;
	int k = MAXSIZe
 } 
