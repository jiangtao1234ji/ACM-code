#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
void print(int x)
{
	cout << x << " ";
}
int main()
{
	vector<int> v;
	getchar();
	int tmp;
	while(cin >> tmp)
	{
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	int m = 0;
	int n = 0;
	for(vector<int>::iterator iv = v.begin(); iv != v.end(); iv++)
	{
		int tmp = *(iv + 1) - *iv;
		if(tmp == 2)
		{
			m = *iv + 1;
		}
		if(tmp == 0)
		{
			n = *iv;
		}
		if(m != 0 && n != 0)
		{
			break;
		}
	}
	cout << m << " " << n << endl;
	return 0;
}
