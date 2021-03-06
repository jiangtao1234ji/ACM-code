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
int endpoint[maxm][maxn];
int lbx[mx], lby[mx], lex[mx], ley[mx], lx[mx], ly[mx], lex1[mx], ley1[mx];

int wenjian(int x1, int y1, int x2, int y2, int x3, int y3, double time1, double time2)
{
	FILE *fp2;
	fp2=fopen("sj.txt","a");
	if(fp2==NULL)
	{
		printf("create file failed\n");
		return -1;
	}
	fprintf(fp2,"Ħ��������(%d,%d) -> ������è����(%d,%d) -> NUIST����(%d,%d)  	time1 is: %lf	time2 is: %lf\n",x1,y1,x2,y2,x3,y3,time1, time2);
	fclose(fp2);
	return 0;
}
int zuobiao()
{
	FILE *fp;
	FILE *fp1;
	FILE *fp2;
	int i, j, k;
	fp=fopen("mtl.txt", "r");
	fp1=fopen("gfxm.txt", "r");
	fp2=fopen("nuist.txt", "r");
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
	if (NULL == fp2)
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
	for (int i = 0; i < maxm; i++)
	{
		for (int j = 0; j < maxn; j++)
		{
			fscanf(fp2, "%d", &(endpoint[i][j]));
		}
		fscanf(fp2, "\n");
	}
	fclose(fp);
	fclose(fp1);
	fclose(fp2);
	printf("\n");
	return 0;
}

int main()
{
	zuobiao();
	int kb=0, ke=0, k=0;
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
			if(endpoint[i][j]==1)
			{
				lx[k]=i;
				ly[k]=j;
				k++;
			}
		}
	}
	for(int i=0; i<ke; i++)
	{
		lex1[i]=lex[i];
		ley1[i]=ley[i];
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
	double mintime1[10000], mintime2[10000];
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
		wenjian(lbx[i],lby[i],lex[minj],ley[minj],mintime[k-1]);
		cout<<"("<<lbx[i]<<","<<lby[i]<<")"<<"->"<<"("<<lex[minj]<<","<<ley[minj]<<")"<<"	"<<"time is:"<<mintime[k-1]<<endl;
		lex[minj]=0;
		ley[minj]=0;
	}
	sort(mintime,mintime+k);
	cout<<mintime[k-1]<<endl;
	return 0;
}

