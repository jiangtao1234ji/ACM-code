#include <stdio.h>
char * a(char * buffer, int value)
{
	int i;
	for (i = sizeof(int) * 2 - 1; i > -1; i--)
		buffer[7 - i] = ((value >> i) & 1) + '0';
	buffer[sizeof(int) * 2] = '\0';

	return buffer;
}
int main(void)
{
	char buffer[9];
	int n;

	while (scanf("%d", &n) != EOF)
	{
		if (n >= 0)
		{
			printf("%s\n", a(buffer, n));
		}
		else
		{
			printf("%s\n", a(buffer, n));
		}
	}
	return 0;
}
