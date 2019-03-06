#include <cstdio>
#include <cstring>

using namespace std;

char a[1005],b[1005];
int len,i=0,ans=0;

int main()
{
	scanf("%s%s",a,b);
	len=strlen(a);
	while(i<len)
	{
		if(a[i]!=b[i])
		{
			a[i+1]=(a[i+1]=='*'?'o':'*');
			++ans;
		}
		++i;
	}
	printf("%d\n",ans);
}
