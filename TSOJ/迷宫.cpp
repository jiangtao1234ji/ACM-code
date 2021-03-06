#include<iostream>
#include<string>
#include<algorithm>
#define maxn 100

using namespace std;

int mg[20][20] =
{
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, { 1, 0, 0, 1, 0, 0, 0, 1, 0, 1 },

	{ 1, 0, 0, 1, 0, 0, 0, 1, 0, 1 }, { 1, 0, 0, 0, 0, 1, 1, 0, 0, 1 },

	{ 1, 0, 1, 1, 1, 0, 0, 0, 0, 1 }, { 1, 0, 0, 0, 1, 0, 0, 0, 0, 1 },

	{ 1, 0, 1, 0, 0, 0, 1, 0, 0, 1 }, { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 },

	{ 1, 1, 0, 0, 0, 0, 0, 0, 0, 1 }, { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};

typedef struct
{
	int x, y;
	int pre;
} Box;

typedef struct
{
	Box data[maxn];
	int front , rear;
} Quene;

void print(Quene quene, int front)
{
	Box path[maxn];
	int k, d =-1;
	k = front;
	while(k != -1)
	{
		d++;
		path[d].x = quene.data[k].x;
		path[d].y = quene.data[k].y;
		k = quene.data[k].pre;
	}
	for (k = d; k >= 0; k--)

	{

		cout << "  (" << path[k].x << "," << path[k].y << ")";

		if ((d - k + 1) % 5 == 0) cout << endl;

	}

	cout << endl;
}

void edQueue(int x, int y, int pre1)

{

	rear++;

	data[rear].i = x;

	data[rear].j = y;

	data[rear].pre = pre1;

}

void deQueue(int &x, int &y, int &cfront)

{

	front++;

	x = data[front].i;

	y = data[front].j;

	cfront = front;

}

int ans(int xi, int yi, int xe, int ye)
{
	Quene quene;
	quene.front = quene.rear = -1;
	quene.edQueue(xi, yi, -1);
	mg[xi][yi] = -1;
	int i, j, di, i1, j1, cfront;
	while(quene.front != quene.rear)
	{
		qu.deQueue(i, j, cfront);
		if(i == xe && j == ye)
		{
			print(quene, cfront);
			return 1;
		}
		for (di=0; di<4; di++)
		{
			switch(di)
			{
				case 0:
					i1=quene.data[quene.front].x-1;
					j1=quene.data[quene.front].y;
					break;
				case 1:
					i1=quene.data[quene.front].x;
					j1=quene.data[quene.front].y+1;
					break;
				case 2:
					i1=quene.data[quene.front].x+1;
					j1=quene.data[quene.front].y;
					break;
				case 3:
					i1=quene.data[quene.front].x;
					j1=quene.data[quene.front].y-1;
					break;
			}
			if (mg[i1][j1]==0)
			{
				qu.edQueue(i1, j1, cfront);
				mg[i1][j1]=-1;
			}
		}
	}
	return 0;
}

int main()
{
	if (!ans(1, 1, 8, 8))
		cout << "�������Թ�·��\n";

	return 0;
}

