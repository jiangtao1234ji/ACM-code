#include<iostream>
using namespace std;
int main()
{
	int a, b, count=2, i, c[100000], max, min;
	while(cin>>a>>b)
	{
		c[0]=a-b;
		max=c[0]>b?c[0]:b;
		min=c[0]>b?b:c[0];
		c[1]=max-min;
		for(i=2;;i++)
		{
			max=c[i-1]>c[i-2]?c[i-1]:c[i-2];
			min=c[i-1]>c[i-2]?c[i-2]:c[i-1];
			c[i]=max-min;
			if(c[i]<0)
			{
				break;
			}
			count++;
		}
		cout << count << endl;
	}
}

