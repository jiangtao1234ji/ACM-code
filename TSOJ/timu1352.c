#include<stdio.h>
#include<string.h>
int main()
{
	int n, m, t, l, r, i, j;
	int map[100010];
	while(scanf("%d %d %d", &n, &m, &t)!=EOF)
	{
		memset( map, 0, sizeof(int)*100010);
		for(i=0; i<m; i++)
		{
			scanf("%d %d", &l, &r);
			map[l]++;
			map[r+1]--;
		}
		for(j=0; j<2; j++)
		{
			for(i=1; i<=n; i++)
			{
				map[i]+=map[i-1];
			}
		}
		for(i=0; i<t; i++)
		{

			scanf("%d %d", &l, &r);
			printf("%d\n", map[r]-map[l-1]);
		}
	}
}
