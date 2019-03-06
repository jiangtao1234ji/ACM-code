#include<iostream>

#define DIGIT4
#define DEPTH 10000
#define MAX 100
typedef int bignum_t[MAX+1];

using namespace std;

void mul(bignum_t c,constbignum_ta,const bignum_tb)
{
	int i,j;
	memset((void*)c,0,sizeof(bignum_t));
	for(c[0]=a[0]+b[0]-1,i=1; i<=a[0]; i++)
		for(j=1; j<=b[0]; j++)
			if ((c[i+j-1]+=a[i]*b[j])>=DEPTH)
				c[i+j]+=c[i+j-1]/DEPTH,c[i+j-1]%=DEPTH;
	for(c[0]+=(c[c[0]+1]>0); !c[c[0]]&&c[0]>1; c[0]--);
}
int main()
{
	int c[MAX+1]={0};
	int a[MAX+1], b[MAX+1];
	while(cin>>a[1]>>b[1])
	{
		mul(a, b, x);
		for(int i=0; i<c[0]; i++)
			cout<<c[i];
		cout<<endl;
	}
	return 0;
}
