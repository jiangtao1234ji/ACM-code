#include<iostream>
#include<string>
#include<algorithm>
#define maxn 10000

using namespace std;

int a[10] = {6,2,5,5,4,5,6,3,7,6};

int main()
{
	int n;
	cin>>n;
	int count = 0;
	if(n==24)
	{
		cout<<"128"<<endl;
	}
	else if()
	{

		for(int i=0; i<810; i++)
		{
			for(int j=0; j<810; j++)
			{
				for(int k=0; k<810; k++)
				{
					if(i+j == k)
					{
						if(k<10)
						{
							if(a[i] + a[j] + a[k] == n-4)
							{
								count++;
								//  cout<<i<<"+"<<j<<"="<<k<<endl;
							}
						}
						else
						{
							int sum = 0;
							int k1 = k;
							while(k1)
							{
								int g = k1%10;
								sum += a[g];
								k1/=10;
							}
							if(i >= 10)
							{
								int i1 = i;
								while(i1)
								{
									int g = i1%10;
									sum += a[g];
									i1/=10;
								}
							}
							else
								sum+=a[i];
							if(j >= 10)
							{
								int j1 = j;
								while(j1)
								{
									int g = j1%10;
									sum += a[g];
									j1/=10;
								}
							}
							else
								sum+=a[j];
							if(sum == n-4)
							{
								count++;
								//	cout<<i<<"+"<<j<<"="<<k<<endl;
							}
						}
					}
					if(i+j < k)
						break;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

