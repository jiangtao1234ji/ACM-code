#include<iostream>
#define list_init_size 100
#define listincreament 10
#define ElemType int
#define equal 1

using namespace std;

typedef struct
{
	ElemType *elem;
	int len;		//当前长度
	int listszie;	//当前分配的容量
} SqList;

bool InitList(SqList &l)
{
	l.elem = (ElemType *)malloc(list_init_size*sizeof(ElemType));
	if(!l.elem)
		exit(-2);
	l.len = 0;
	l.listszie = list_init_size;
	return 1;
}

int ListLength(SqList &l)
{
	return l.len;
}

ElemType GetElem(SqList &l, int i)
{
	return l.elem[i-1];
}

bool LocateElem(SqList &l, ElemType e, int status)
{
	//status==1, 判断l中是否存在元素e
	if(status)
	{
		int len = ListLength(l);
		for(int i=0; i<len; i++)
		{
			if(l.elem[i] == e)
				return 1;
		}
		return 0;
	}
}

void ListInsert(SqList &l, int i, ElemType e)
{
	if(i<1 || i>l.len+1)
		return;
	if(l.len >= l.listszie)
	{
		newbase = (ElemType *)realloc(l.elem, (l.listszie+listincreament)*sizeof(ElemType));
		if(!newbase)
			exit(-2);
		l.elem = newbase;
		l.listszie+=listincreament;
	}
	ElemType *q = &(l.elem[i-1]);
	for(ElemType *p = &(l.elem[l.len-1]); p>=q; --p)
		*(p+1) = *p;
	*q = e;
	++l.len;
}


//合并两个线性表（A并B）
void unionList(SqList &la, SqList &lb)
{
	int lena = ListLength(la);
	int lenb = ListLength(lb);
	for(int i=0; i<lenb; i++)
	{

		ElemType e = GetElem(lb, i);
		if(!LocateElem(la, e, equal))
			ListInsert(la, ++lena, e);
	}
}

