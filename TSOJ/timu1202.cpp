#include <iostream>
using namespace std;
int main()
{
	char str[20] = {0}, substr[10] = {0};
	int j;
	while (cin >> str >> substr)
	{
		int i = 0, max1 = 0;
		char max2 = str[0];
		while (str[i])
		{
			if (str[i] > max2)
			{
				max1 = i;
				max2 = str[i];
			}
			i++;
		}
		for (j = 14; j > max1; j--)
		{
			str[j+3] = str[j];
		}
		str[max1+1] = substr[0];
		str[max1+2] = substr[1];
		str[max1+3] = substr[2];
		cout << str << endl;
	}
	return 0;
}
