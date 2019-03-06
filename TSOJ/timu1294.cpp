#include <iostream>

using namespace std;

int main()
{
	int n, m,total = 1;
	while(cin>>n>>m)
	{
		if(n < m) swap(n, m);
		while(n-m)
		{
			total++;
			n -= m;
			if(n < m) swap(n, m);
		}
		cout<<total<<endl;
	}
	return 0;
}
