#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	while(1)
	{
		int a[10];
		int count=0;
		for(int i=0; i<10; i++)
		{
			cin>>a[i];
			count++;
		}
		int b[10], num1=0;
		int c[10], num2=0;
		for(int i=0; i<10; i++)
		{
			if(a[i]%2==1)
				b[num1++]=a[i];
			else
				c[num2++]=a[i];
		}
		int temp1;
		int temp2;
		for(int i=0; i<num1; i++)
		{
			for(int j=i; j<num1; j++)
			{
				if(b[i]<b[j])
				{
					temp1=b[j];
					b[j]=b[i];
					b[i]=temp1;
				}
			}
		}
		for(int i=0; i<num2; i++)
		{
			for(int j=i; j<num2; j++)
			{

				if(c[i]>c[j])
				{
					temp2=c[j];
					c[j]=c[i];
					c[i]=temp2;
				}
			}
		}
		for(int i=0; i<num1; i++)
			cout<<b[i]<<" ";
		for(int i=0; i<num2; i++)
		{


			cout<<c[i]<<" ";
		}
		if(count==10)
			break;
	}
	return 0;
}

