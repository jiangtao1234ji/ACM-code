#include<iostream>
#define ElemType int
#define maxn 1000

using namespace std;

//单链表且动态分配内存
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
} LNode, *LinkList;

bool GetElem(LinkList l, int i, ElemType &e)
{
	LinkList p = l->next;
	int j = 1;
	while(p && j<i)
	{
		p = p->next;
		j++;
	}
	if(!p || j>i)
		return 0;
	e = p->data;
	return 1;
}

void ListInsert(LinkList &l, int i, ElemType e)
{
	LinkList p = l;
	int j = 0;
	while(p && j<i-1)
	{
		p = p->next;
		j++;
	}
	if(!p || j>i-1)
		return;
	LinkList s = (LinkList)malloc(sizeof(LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
}

void ListDelete(LinkList &l, int i, ElemType &e)
{
	LinkList p = l;
	int j = 0;
	while(p->next && j<i-1)
	{
		p = p->next;
		j++;
	}
	if(!p->next || j>i-1)
		return;
	LinkList q = p->next;
	p->next = q->next;
	e = q->data;
	free(q);
}

void CreateList(LinkList &l, int n)
{
	l = (LinkList)malloc(sizeof(LNode));
	l->next = NULL;
	for(int i=n; i>0; i--)
	{
		LinkList p = (LinkList)malloc(sizeof(LNode));
		scanf("%d",&p->data);
		p->next = l->next;
		l->next = p;
	}
}

void MergeList(LinkList &la, LinkList &lb, LinkList &lc)
{
	LinkList pa = la->next;
	LinkList pb = lb->next;
	LinkList pc = lc = la;
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
		pc->next = pa?pa:pb;
		free(lb);
	}
}


//单链表用数组实现，静态链表
typedef struct
{
	ElemType data;
	int cur;
} component, SLinkList[maxn];

int LocateElem_SL(SLinkList s, ElemType e)
{
	int i = s[0].cur;
	while(i && s[i].data != e)
		i = s[i].cur;
	return i;
}

void InitSpace_SL(SLinkList &space)
{
	for(int i=0; i<maxn-1; i++)
		space[i].cur = i+1;
	space[maxn-1].cur = 0;
}

int Malloc_SL(SLinkList &space)
{
	int i = space[0].cur;
	if(space[0].cur)
		space[0].cur = space[i].cur;
	return i;
}

void Free_SL(SLinkList &space, int k)
{
	space[k].cur = space[0].cur;
	space[0].cur = k;
}

void difference(SLinkList &space, int &s)
{
	InitSpace_SL(space);
	s = Malloc_SL(space);
	int r = s;
	int n, m;
	scanf("%d%d", &m, &n);
	int i, b, k;
	for(int j=1; j<=m; j++)
	{
		i = Malloc_SL(space);
		scanf("%d", &space[i].data);
		space[r].cur = i;
		r = i;
	}
	space[r].cur = 0;
	for(int j=1; j<=n; j++)
	{
		scanf("%d", &b);
		int p = s;
		k = space[s].cur;
		while(k != space[r].cur && space[k].data != b)
		{
			p = k;
			k = space[k].cur;
		}
		if(k == space[r].cur)
		{
			i = Malloc_SL(space);
			space[i].data = b;
			space[i].cur = space[r].cur;
			space[r].cur = i;
		}
		else
		{
			space[p].cur = space[k].cur;
			Free_SL(space, k);
			if(r == k)
				r = p;
		}
	}
}


//双向链表

typedef struct DuLNode
{

}

