#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

#define maxm 120
#define maxn 100
#define mx 420

int beginpoint[maxm][maxn];
int stoppoint[maxm][maxn];
int lbx[mx], lby[mx], lex[mx], ley[mx];

int wenjian()
{
	FILE *fp2;
	fp=fopen("sj.txt","w");
	if(fp==NULL)
	{
		printf("create file failed\n");
		return -1;
	}
	fprintf(fp,"%d",x);
}
int zuobiao()
{
	FILE *fp;
	FILE *fp1;
	int i, j, k;
	fp=fopen("mtl.txt", "r");
	fp1=fopen("gfxm.txt", "r");
	if (NULL == fp)
	{
		printf("failed to open dos.txt\n");
		return 1;
	}
	if (NULL == fp1)
	{
		printf("failed to open dos.txt\n");
		return 1;
	}
	for (int i = 0; i < maxm; i++)
	{
		for (int j = 0; j < maxn; j++)
		{
			fscanf(fp, "%d", &(beginpoint[i][j]));
		}
		fscanf(fp, "\n");
	}
	for (int i = 0; i < maxm; i++)
	{
		for (int j = 0; j < maxn; j++)
		{
			fscanf(fp1, "%d", &(stoppoint[i][j]));
		}
		fscanf(fp1, "\n");
	}
	fclose(fp);
	fclose(fp1);
	printf("\n");
	return 0;
}

int main()
{
	zuobiao();
	int kb=0, ke=0;
	for (int i = 0; i < maxm; i++)
	{
		for (int j = 0; j < maxn; j++)
		{
			if(beginpoint[i][j]==1)
			{
				lbx[kb]=i;
				lby[kb]=j;
				kb++;
			}
			if(stoppoint[i][j]==1)
			{
				lex[ke]=i;
				ley[ke]=j;
				ke++;
			}
		}
	}
	/*for (int i = 0; i < maxm; i++)
	{
		for (int j = 0; j < maxn; j++)
		{
			cout<<beginpoint[i][j];
		}
		cout<<endl;
	}
	for (int i = 0; i < maxm; i++)
	{
		for (int j = 0; j < maxn; j++)
		{
			cout<<stoppoint[i][j];
		}
		cout<<endl;
	}*/
	/*for(int i=0; i<kb; i++)
	{
		cout<<lbx[i]<<","<<lby[i]<<endl;
	}
	for(int i=0; i<ke; i++)
	{
		cout<<lex[i]<<","<<ley[i]<<endl;
	}*/
	double mintime[10000];
	int k=0;
	int mini=0, minj=0;
	double d=0;
	for(int i=0; i<ke; i++)
	{
		double min=100000000;
		for(int j=0; j<ke; j++)
		{
			if(lex[j]==0)
				continue;
			d=sqrt((lbx[i]-lex[j])*(lbx[i]-lex[j])+(lby[i]-ley[j])*(lby[i]-ley[j]));
			if(min>d)
			{
				min=d;
				minj=j;
			}
		}
		mintime[k++]=d/3;
		cout<<"("<<lbx[i]<<","<<lby[i]<<")"<<"->"<<"("<<lex[minj]<<","<<ley[minj]<<")"<<"	"<<"time is:"<<mintime[k-1]<<endl;
		lex[minj]=0;
		ley[minj]=0;
	}
	sort(mintime,mintime+k);
	cout<<mintime[0]<<endl;
	return 0;
}

