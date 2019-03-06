#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>

using namespace std;

struct Stu
{
	string name;
	int qimo;
	int yiping;
	char ganbu;
	char people;
	int luenwen;
};

int main()
{
	int n;
	while(cin>>n)
	{
		Stu stu[n];
		int sum[n];
		memset(sum,0,sizeof(sum));
		for(int i=0; i<n; i++)
		{
			cin>>stu[i].name>>stu[i].qimo>>stu[i].yiping>>stu[i].ganbu>>stu[i].people>>stu[i].luenwen;
		}
		for(int i=0; i<n; i++)
		{
			if(stu[i].qimo>80&&stu[i].luenwen>=1)
				sum[i]+=8000;
			if(stu[i].qimo>85&&stu[i].yiping>80)
				sum[i]+=4000;
			if(stu[i].qimo>90)
				sum[i]+=2000;
			if(stu[i].qimo>85&&stu[i].people=='Y')
				sum[i]+=1000;
			if(stu[i].yiping>80&&stu[i].ganbu=='Y')
				sum[i]+=850;
		}
		int max=sum[0], sum1=0;
		int k;
		for(int i=0; i<n; i++)
		{
			if(max<sum[i])
			{
				max=sum[i];
				k=i;
			}
			sum1+=sum[i];
		}
		cout<<stu[k].name<<endl;
		cout<<max<<endl;
		cout<<sum1<<endl;
	}
	return 0;
}

