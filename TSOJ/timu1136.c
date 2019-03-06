#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int bigchenfa(int *sum,int *a,int *b,int la,int lb)
{
	int i,j,lsum = 0 ;
	memset(sum,0,sizeof(sum));
	for(i=1 ; i<= la ; i++)
		for(j=1,lsum=i-1; j<= lb ; j++)
			sum[++lsum] += b[j] * a[i] ;
	for(i=1 ; i<= lsum ; i++)
		if (sum[i] >= 10)
		{
			if ( sum[lsum] >= 10)
				lsum ++ ;
			sum[i+1] += sum[i] / 10 ;
			sum[i] %= 10 ;
		}
	return lsum ;
}
int main()
{
	int a[1000]= {0},b[1000]= {0},sum[2000]= {0} ;
	int la=0,lb=0,lsum=0;
	int i,j ;
	string sa,sb;
	while(cin>>sa)
	{
		cin>>sb;
		la = sa.size();
		lb = strlen(sb);
		for(i=1,j=la-1; i<= la ; i++,j--)
			a[i] = sa[j] - '0' ;
		for(i=1,j=lb-1; i<= lb ; i++,j--)
			b[i] = sb[j] - '0' ;
		lsum = bigchenfa(sum,a,b,la,lb) ;
		for(i=lsum ; i> 0 ; i--)
			printf("%d",sum[i]);
		printf("\n");
		memset(sum,0,sizeof(sum));
	}
}
