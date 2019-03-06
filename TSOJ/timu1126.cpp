#include<stdio.h>
#include<string.h>

void Swap(int *lhs, int *rhs)
{
	int t = *lhs;

	*lhs = *rhs;
	*rhs = t;
}

void permutation(int source[], int begin, int end)
{
	int i;
	if (begin >= end)
	{
		for (i = 0; i < end; i++)
		{
			printf("%d", source[i]);
		}
		printf("\n");
	}
	else
	{
		for (i = begin; i < end; i++)
		{
			if (begin != i)
			{
				Swap(&source[begin], &source[i]);
			}
			permutation(source, begin + 1, end);

			if (begin != i)
			{
				Swap(&source[begin], &source[i]);
			}
		}
	}
}

int main()
{
	int source[30];
	int i, count;
	while(scanf("%d", &count)!=EOF)
	{
		for (i = 0; i < count; i++)
		{
			source[i] = i + 1;
		}
		permutation(source, 0, count);
	}
	return 0;
}
