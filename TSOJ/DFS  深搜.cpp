/*
��DFS �����2D ���귶ΧΪ����������DFS �㷨��ʵ��˼�롣
*/
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
const int maxn=100;
bool vst[maxn][maxn]; // ���ʱ��
int map[maxn][maxn]; // ���귶Χ
int dir[4][2]= {0,1,0,-1,1,0,-1,0}; // ����������(x,y)��Χ���ĸ�����

bool CheckEdge(int x,int y) // �߽�������Լ���������ж�
{
	if(!vst[x][y] && ...) // ��������
		return 1;
	else // ��Լ��������ͻ
		return 0;
}

void dfs(int x,int y)
{
	vst[x][y]=1; // ��Ǹýڵ㱻���ʹ�
	if(map[x][y]==G) // ����Ŀ��̬G
	{
		...... // ����Ӧ����
		return;
	}
	for(int i=0; i<4; i++)
	{
		int tempx=x+dir[i][0];
		int tempy=y+dir[i][1]; 
		if(CheckEdge(tempx,tempy)) // ���չ���������һ���ڵ�
		{
			dfs(tempx,tempy;
			vst[tempx][tempy];//���� 
		}
	}
	return; // û���²������ڵ㣬����
}
int main()
{
	......
	return 0;
}
