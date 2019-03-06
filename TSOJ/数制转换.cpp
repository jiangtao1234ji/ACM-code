#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

typedef struct LNode
{
	int data;
	struct LNode *next;
} LNode, *LinkList;

typedef struct
{
	LinkList top;
} Stack;
int StackEmpty(Stack s);

void InitStack(Stack &s)
{
	s.top=NULL;
}

void Push(Stack &s,int e)
{
	LinkList p;
	p = (LinkList )malloc(sizeof(LNode));
	if (!p) exit(-2);
	p->data = e;
	p->next = s.top;
	s.top = p;
}


void Pop(Stack &s, int &e)
{
	LinkList p;
	if(StackEmpty(s)) exit(-3);
	p = s.top;
	e = s.top->data;
	s.top = p->next;
	free(p);
}

void Pop(Stack &s)
{
	LinkList p;
	if(StackEmpty(s)) exit(-3);
	p = s.top;
	s.top = p->next;
	free(p);
}


int Top(Stack s)
{
	if(StackEmpty(s)) exit(-3);
	return s.top->data;
}

int StackEmpty(Stack s)
{
	if(s.top==NULL) return 1;
	return   0;
}

void clearStack(Stack &s)
{
	if(!StackEmpty(s))
		Pop(s);
}


void conversion(Stack &s)
{
	while(n)
	{
		Push(s,n%m);
		n/=m;
	}
	while(!StackEmpty(s))
	{
		int e=0;
		Pop(s,e);
		cout<<e;
	}
	cout<<endl;
}




int main()
{
	Stack s;
	InitStack(s);
	int n, m;
	cout<<"请输入十进制数和你要转化成的进制:"<<endl;
	while(cin>>n>>m)
	{

		conversion(s);
	}
	return 0;
}

