#include <stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int a, b, c, d=0, num, tmp, i;
	while(scanf("%d %s %d", &a, str, &b)!=EOF)
	{
		num=0;
		c=strlen(str);
		for(i=0; i<c; i++)
		{
			if(str[i] >= 'a')
			{
				str[i] -= 32;
			}
			tmp = (str[i] >= 'A' ? str[i]-'A'+10:str[i]-'0');
			num = num * a + tmp;
		}
		if(num == 0)
		{
			puts("0");
			continue;
		}
		while(num)
		{
			if(num%b <=9)
				str[d++] = num%b+'0';
			else
				str[d++] = num%b-10+'A';
			num = num/b;
		}
		for(i=d-1; i>=0; i--)
			printf("%c",str[i]);
		puts("");
		d=0;
	}
	return 0;
}
