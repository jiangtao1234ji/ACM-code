#include <iostream>
#include<vector>

using namespace std;

void multiply(int a, vector& result)
{
	int i, j, k;
	int tmp;

	for (i = 0; i < ; ++i)
	{
		result[k++] += a[i] * 2;
	}
	vector c(a.size() + b.size() - 1, 0);
	for (k = result.size() - 1;   k >= 0; --k)
	{
		if (result[k] > 9)
		{
			if (k != 0)
			{
				result[k-1] += result[k] / 10;
				result[k] %= 10;
			}
			else   //����ǵ�һ�����9�����һ����ͷ��
			{
				tmp = result[k] / 10;
				result[k] %=10;
				result.insert(result.begin(), tmp);
			}
		}
	}
}
int main()
{
	int num;
	while(cin>>num)
	{
		cout<<val(num)<<endl;
	}
	return 0;
}
