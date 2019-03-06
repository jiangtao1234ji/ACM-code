#include<iostream>
#include<cstring>
using namespace std;
int    count(int a,int b,char c)
{
	if(c=='+') return a+b;
	if(c=='-') return a-b;
	if(c=='/') return a/b;
	if(c=='*') return a*b;

}

int main()
{
	char str[100];
	cin>>str;
	int number[10]= {0};
	char sign[10];

	int i,j=0,k=0,m;
	int strlong=strlen(str);
	cout<<strlong;
	for(i=0; i<strlong; i++)
	{
		if(str[i]>='0'&&str[i]<='9')
			number[j]=number[j]*10+str[i]-48;

		else
		{
			j++;
			sign[k]=str[i];
			k++;
		}
	}
	j++;
	for(i=0; i<j; i++)
		cout<<number[i]<<endl;
	for(i=0; i<k; i++)
		cout<<sign[i]<<endl;

	for( i=0; i<k; i++)
	{
		if(sign[i]=='/'||sign[i]=='*')
		{
			number[i]=count(number[i],number[i+1],sign[i]);
			cout<<number[i];
			for(m=i; m<k-i; m++)
			{
				sign[m]=sign[m+1];
				number[m+1]=number[m+2];
			}
			k--;
			i--;
		}
	}
	for( i=0; i<k; i++)
	{
		if(sign[i]=='+'||sign[i]=='-')
		{
			number[i]=count(number[i],number[i+1],sign[i]);
			cout<<number[i];
			for(m=i; m<k-i; m++)
			{
				sign[m]=sign[m+1];
				number[m+1]=number[m+2];
			}
			k--;
			i--;
		}

	}

	for (i=0; i<3; i++)
	{
		cout<<number[i];
	}
	cout<<k;
}
