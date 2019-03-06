#include <iostream>
#define DIGIT 4
#define DEPTH 10000
#define MAX 100

using namespace std;

int main()
{
	int n;
	int a[MAX+1];
	while(cin>>n)
	{
		int c=n;
		int count=0;
		a[1]=c;
		while(c)
		{
			c/=10;
			count++;
		}
		a[0]=count;
		int b=n-1;
		while(n--)
		{
			int i;
			for(a[1]*=b,i=2; i<=a[0]; i++)
			{
				a[i]*=b;
				if (a[i-1]>=DEPTH) a[i]+=a[i-1]/DEPTH,a[i-1]%=DEPTH;
			}
			for(; a[a[0]]>=DEPTH; a[a[0]+1]=a[a[0]]/DEPTH,a[a[0]]%=DEPTH,a[0]++);
			for(; !a[a[0]]&&a[0]>1; a[0]--);
			b--;
		}
		for(int i=0; i<=a[0]; i++)
			cout<<a[i];
	}
	return 0;
}
