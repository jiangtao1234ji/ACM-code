#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int xuhao[n];
		string guojia[n];
		int renshu[n];
		string zhuo[n];
		string x="China";
		for(int i=0; i<n; i++)
		{
			cin>>xuhao[i]>>guojia[i]>>renshu[i]>>zhuo[i];
		}
		for(int i=0; i<n; i++)
		{
			if(guojia[i]==x)
			{
				if(i==n-1)
					break;
				else
				{

					string a=guojia[i];
					guojia[i]=guojia[n-1];
					guojia[n-1]=a;
					int b=xuhao[i];
					xuhao[i]=xuhao[n-1];
					xuhao[n-1]=b;
					int c=renshu[i];
					renshu[i]=renshu[n-1];
					renshu[n-1]=c;
					string d=zhuo[i];
					zhuo[i]=zhuo[n-1];
					zhuo[n-1]=d;
				}
			}
		}
		for(int i=0; i<n-1; i++)
		{
			for(int j=0; j<n-1; j++)
			{
				if(guojia[i]<guojia[j])
				{
					string a=guojia[i];
					guojia[i]=guojia[j];
					guojia[j]=a;
					int b=xuhao[i];
					xuhao[i]=xuhao[j];
					xuhao[j]=b;
					int c=renshu[i];
					renshu[i]=renshu[j];
					renshu[j]=c;
					string d=zhuo[i];
					zhuo[i]=zhuo[j];
					zhuo[j]=d;
				}
			}
		}
		for(int i=0; i<n; i++)
			cout<<xuhao[i]<<" "<<guojia[i]<<" "<<renshu[i]<<" "<<zhuo[i]<<endl;
	}
	return 0;
}

