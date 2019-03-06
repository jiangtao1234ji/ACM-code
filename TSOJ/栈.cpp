#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

typedef struct LNode
{
	char data;
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

void Push(Stack &s,char e)
{
	LinkList p;
	p = (LinkList )malloc(sizeof(LNode));
	if (!p) exit(-2);
	p->data = e;
	p->next = s.top;
	s.top = p;
}


void Pop(Stack &s)
{
	LinkList p;
	if(StackEmpty(s)) exit(-3);
	p = s.top;
	s.top = p->next;
	free(p);
}

char Top(Stack s)
{
	if(StackEmpty(s)) exit(-3);
	return s.top->data;
}

int StackEmpty(Stack s)
{
	if(s.top==NULL) return 1;
	return   0;
}

int main()
{
	Stack s;
	InitStack(s);
	string a;
	cin>>a;
	int mid = a.length()/2;
	int i, flag = 1;
	for(i = 0; i<mid; ++i)
		Push(s,a[i]);
	if(a.length()%2 == 1)
		i += 1;
	while(!StackEmpty(s))
	{
		char temp = Top(s);
		Pop(s);
		if(temp != a[i])
		{
			flag = 0;
			break;
		}
		else
			i+=1;
	}
	if(!flag)
		cout<<"Wrong"<<endl;
	else
		cout<<"Right"<<endl;
	return 0;
}

