#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

typedef struct List
{
	int data;
	List *next;
}*nlist;


void creatList(nlist &l, int n)
{
	List *p;
	l = (List *) malloc(sizeof(List));
	l->next = NULL;
	head = l;
	for(int i=0; i<n; ++i)
	{
		p = (List *) malloc(sizeof(List));
		p->next = NULL;
		int data;
		cin>>p->data;
		p->next = l->next;
		l->next = p;
	}
}

void sawp(int &a, int &b)
{
	int temp;

	temp = b;
	b = a;
	a = temp;
}

void print(nlist l)
{
	nlist p;
	p = l->next;
	while(p != NULL)
	{

		p = p->next;
	}
	cout<<endl;
}

int insertList(nlist &l, int i, int e)
{
	nlist p = l;
	int j = 0;
	while(p&&j<i-1)
	{
		p=p->next;
		j++;
	}
	if(j>i-1|| !p)
		return 0;
	nlist q = (List *) malloc(sizeof(List));
	q->data = e;
	q->next = p->next;
	p->next = q;
	return 1;
}


int deleteList(nlist &l, int i)
{
	nlist p = l;
	int j = 0;
	while(p&&j<i-1)
	{
		p=p->next;
		j++;
	}
	if(j>i-1|| !p)
		return 0;
	nlist q = p->next;
	p->next = q->next;
	free(q);
	return 1;
}

void MergeList(nlist &la, nlist &lb, nlist &lc)
{
	nlist pa = la->next, pb = lb->next, pc;
	lc = pc = la;
	while(pa&&pb)
	{
		if(pa->data >= pb->data)
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
		else
		{
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
	}
	pc->next = pa?pa:pb;
	free(lb);
}



int main()
{
	nlist l, k, ans;
	creatList(l,5);
	creatList(k,5);
	MergeList(l,k,ans);
	print(ans);
	return 0;
}
