#include<iostream>
#include<string>
#include<algorithm>
#define maxn 100

using namespace std;

typedef struct
{
	string day;
	string cuorse[maxn];
} kb;

void createkb(kb *k)
{
	cout<<"ÇëÊäÈëÄãµÄ¿Î±í:"<<endl;
	for(int i=0; i<5; ++i)
	{
		cin>>k[i].day;
		for(int j=0; j<4; ++j)
			cin>>k[i].cuorse[j];

	}
}

void print(kb *k)
{
	cout<<endl<<endl<<endl;
	for(int i=0; i<5; ++i)
		cout<<"\t\t"<<k[i].day;
	cout<<endl;
	for(int j=0; j<4; ++j)
	{
		for(int i=0; i<5; ++i)
		{
			if(j==1||j==2)
			{

				if(i!=0)
					cout<<"\t\t"<<k[i].cuorse[j];
			}
			else
				cout<<"\t\t"<<k[i].cuorse[j];
		}
		cout<<endl;
	}
}

int main()
{
	kb k[5];
	createkb(k);
	print(k);
	return 0;
}

