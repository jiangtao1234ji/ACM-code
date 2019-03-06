#include<stdio.h>
#include<string.h>
int main()
{
	int i=0, b=1;
	int a[10000];
	while(scanf("%c", &a[0])!=EOF)
	{
		printf("-");
		for(i=1; ; i++)
		{
			scanf("%c", &a[i]);
			if(a[i]=='\n')
			{
				break;
			}
			b++;
		}
		for(i=0; i<b; i++)
		{
			switch(a[i]-'0')
			{
				case 0:
					printf(".-----");
					break;
				case 1:
					printf("..----");
					break;
				case 2:
					printf("...---");
					break;
				case 3:
					printf("....--");
					break;
				case 4:
					printf(".....-");
					break;
				case 5:
					printf("-....-");
					break;
				case 6:
					printf("--...-");
					break;
				case 7:
					printf("---..-");
					break;
				case 8:
					printf("----.-");
					break;
				case 9:
					printf("------");
					break;
			}
		}
		printf("\n");
		b=1;
	}
	return 0;
}
