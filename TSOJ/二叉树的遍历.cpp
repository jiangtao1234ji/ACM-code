#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

typedef struct Tree
{
	char data;
	Tree *lchild, *rchild;
}*tree;

bool CreateTree(tree &t)
{
	char ch;
	cin>>ch;
	if(ch == '-1')
		t = NULL;
	else
	{
		if(!(t = (Tree *) malloc(sizeof(Tree))))
			return false;
		t->data = ch;
		CreateTree(t->lchild);
		CreateTree(t->rchild);
	}
}

void preorder()//
{
}

int main()
{

	return 0;
}

