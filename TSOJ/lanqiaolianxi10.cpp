#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int a, b, c;
	//a==1&&b==0  b==1&&c==0    c==1&&b==0&&a==0
	for(int a=0; a<2; a++)
	{
		for(int b=0; b<2; b++)
		{
			for(int c=0; c<2; c++)
			{
				if((a==1&&b==0||a==0&&b==1)&&(b==1&&c==0||b==0&&c==1)&&(c==1&&(b==0&&a==0))||(c==0&&(b==1&&a==1)))
					cout<<a<<b<<c;
			}
		}
	} 
	return 0;
}

