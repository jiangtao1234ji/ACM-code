#include<iostream>
using namespace std;
int main()
{
	int n, i, c, d=0, j;
	int m[10], a[100];
	while(cin>>n)
	{
		for(i=0; i<n; i++)
		{
			cin>>m[i];
		}
		for(i=0; i<n; i++)
		{
			while(m[i]!=0)
			{
				c=m[i]%17;
				m[i]/=17;
				d++;
				a[d]=c;
			}
			for(j=d; j>=1; j--)
			{
				if(j>=2)
				{
					if(a[j]>9)
					{
						switch(a[j])
						{
							case 10:
								cout<<"A";
								break;
							case 11:
								cout<<"B";
								break;
							case 12:
								cout<<"C";
								break;
							case 13:
								cout<<"D";
								break;
							case 14:
								cout<<"E";
								break;
							case 15:
								cout<<"F";
								break;
							case 16:
								cout<<"G";
								break;
						}
					}
					else
					{
						cout<<a[j];
					}
				}
				else
				{
					if(a[j]>9)
					{
						switch(a[j])
						{
							case 10:
								cout<<"A"<<endl;
								break;
							case 11:
								cout<<"B"<<endl;
								break;
							case 12:
								cout<<"C"<<endl;
								break;
							case 13:
								cout<<"D"<<endl;
								break;
							case 14:
								cout<<"E"<<endl;
								break;
							case 15:
								cout<<"F"<<endl;
								break;
							case 16:
								cout<<"G"<<endl;
								break;
						}
					}
					else
					{
						cout<<a[j]<<endl;
					}
				}
				d=0;
			}
		}
	}
}
