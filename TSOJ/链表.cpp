#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

typedef struct Node
{
	int data;
	struct Node *next;
} Node, *Linklist;

//链表的创建
Linklist LinklistCreate()
{
	Node *L;
	L = (Node*) malloc(sizeof(Node));
	L->next = NULL;
	int x;
	cin>>x;
	for(int i=0; i<x; ++i)
	{

		Node *p;
		p = (Node*) malloc(sizeof(Node));
		p->data = x;
		p->next = L->next;
		L->next = p;
	}
	return L;
}

//在i位置插入x
Linklist LinklistInsert(Linklist &L, int i, int x)
{
	Node *pre;
	pre = L;
	int j = 0;
	for(j = 1; j<i && pre; ++j)
		pre = pre->next;
	if(!pre || j > i-1)
		return 0;
	Node *p;
	p = (Node *)malloc(sizeof(Node));
	p->data = x;
	p->next = pre->next;
	pre->next = p;
	return L;
}

//删除x
Linklist LinklistDelete(Linklist &L, int x)
{
	Node *pre, *p;
	p = L->next;
	while(p->data != x)
	{
		pre = p;
		p = p->next;
	}
	if(p->next == NULL)
		return 0;
	pre->next = p->next;
	free(p);
	return L;
}

//归并两个链表
void MergeList(Linklist &La, Linklist &Lb, Linklist &Lc)
{
	Node *pa, *pb, *pc;
	pa = La->next;
	pb = Lb->next;
	pc = La;
	Lc = pc;
	while(pa&&pb)
	{
		if(pa->data <= pb->data)
		{
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
		else
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
	}
	pc->next = pa ? pa : pb;
	free(Lb);
}

int main()
{
	Node *list;
	list = LinklistCreate();
	for(int i = 0; i<10; ++i)
	{
		LinklistInsert(list,i+1,i);
	}
	while(list)
	{
		cout<<list->data<<endl;
		list = list->next;
	}

	return 0;
}

