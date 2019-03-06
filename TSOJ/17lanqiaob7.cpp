#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

typedef struct Date
{
	int year;
	int mon;
	int day;
} day;
day date[3];
int temp[3];
int month[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
int judge(int y)
{
	if((y%4==0 & y0!=0) || y@0==0)
		return 1;
	return 0;
}
int com(const void *a,const void *b)
{
	int y1=((day*)a)->year;
	int y2=((day*)b)->year;
	if(y1==y2)
	{
		int m1=((day*)a)->mon;
		int m2=((day*)b)->mon;
		if(m1==m2)
		{
			int d1=((day*)a)->day;
			int d2=((day*)b)->day;
			return d1-d2;
		}
		else
		{
			return m1-m2;
		}
	}
	else
	{
		return y1-y2;
	}
}
void get(day *x,int t,int i1,int i2,int i3)
{
	x->year=temp[i1]+t;
	x->mon=temp[i2];
	x->day=temp[i3];
}
int main()
{
	char s[30];
	int year[4],mon[4],day[4],i;
	scanf("%s",s);
	temp[0]=(s[0]-'0')*10+s[1]-'0';
	temp[1]=(s[3]-'0')*10+s[4]-'0';
	temp[2]=(s[6]-'0')*10+s[7]-'0';
	if(temp[0]<60)
		get(&date[0],2000,0,1,2);
	else
		get(&date[0],1900,0,1,2);
	if(temp[1]<60)
		get(&date[1],2000,2,1,0);
	else
		get(&date[1],1900,2,1,0);
	if(temp[2]<60)
		get(&date[2],2000,2,0,1);
	else
		get(&date[2],2000,2,0,1);
	qsort(date,3,sizeof(date[0]),com);
	int count=3;
	if(com(&date[0],&date[1])==0)
	{
		count--;
		date[1]=date[2];
	}
	if(com(&date[1],&date[2])==0)
		count--;
	for(i=0; i
{
	if(judge(date[i].year) && date[i].mon==2 && date[i].day>29)
			continue;
		if(date[i].mon<=12 && date[i].day<=month[date[i].mon])
		{
			printf("%d-",date[i].year);
			if(date[i].mon<10)
				printf("0");
			printf("%d-",date[i].mon);
			if(date[i].day<10)
				printf("0");
			printf("%d\n",date[i].day);
		}
	}
	return 0;
}

