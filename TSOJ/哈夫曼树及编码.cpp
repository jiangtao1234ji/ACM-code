#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000
#define n 4
#define m (2*n-1)

using namespace std;

typedef struct HuffmanTree
{
	int weight;
	int parent, lchild, rchild;
} HuffmanTree;

typedef struct CodeNode
{
	int ch;
	char bits[n+1];
} CodeNode;

void Select(HuffmanTree tree[], int l, int &s1, int &s2)
{
	s1 = s2 = 0;
	int min = 1e9;
	for(int i=0; i<l; i++)
	{
		if(tree[i].parent == -1)
		{
			if(min > tree[i].weight)
			{
				min = tree[i].weight;
				s1 = i;
			}
		}
	}
	min = 1e9;
	for(int i = 0; i<l; i++)
	{
		if( i == s1)
			continue;
		if(tree[i].parent == -1)
		{
			if(min > tree[i].weight)
			{
				min = tree[i].weight;
				s2 = i;
			}
		}
	}
}

void CreateHuffmanTree(HuffmanTree tree[], int n)
{
	for(int i=n; i<m; i++)
	{
		int s1, s2;
		HuffmanTree temp;
		Select(tree, i, s1, s2);
		cout<<"s1:"<<s1<<" "<<"s2:"<<s2<<<<endl;
		temp.weight = tree[s1].weight + tree[s2].weight;
		tree[s1].parent = i;
		tree[s2].parent = i;
		temp.lchild=s1;
		temp.rchild=s2;
		temp.parent=-1;
		tree[i]=temp;
	}
}

void CreateHuffmanCode(HuffmanTree tree[])
{
	char cd[n+1];
	for(int i=0; i<n; i++)
	{
		printf("\n");

		printf("%d",tree[i].weight);

		printf(":");
	}
}


int main()
{
	HuffmanTree tree[m+1];
	for(int i=0; i<n; i++)
		tree[i]= {0,-1,-1,-1};
	cout<<"哈夫曼树叶子结点有"<<n<<"个"<<endl;
	cout<<"请输入哈夫曼树叶子结点的权值:";
	for(int i=0; i<n; i++)
	{
		int w;
		cin>>w;
		tree[i].weight = w;
	}
	CreateHuffmanTree(tree, n);
	for(int j=0; j<m; j++)
	{
		printf("tree[%d]:weight=%d \n", j, tree[j].weight);
	}
	CreateHuffmanCode(tree);
	return 0;
}

