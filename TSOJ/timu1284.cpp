#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i, b;
	string a;
	while(cin>>a)
	{
		cout<<"-";
		for(i=0;; i++)
		{
			if(a[i]>='0'&&a[i]<=9)
			{
				switch(a[i])
				{
					case 0:
						cout<<".-----";
						break;
					case 1:
						cout<<"..----";
						break;
					case 2:
						cout<<"...---";
						break;
					case 3:
						cout<<"....--";
						break;
					case 4:
						cout<<".....-";
						break;
					case 5:
						cout<<"-....-";
						break;
					case 6:
						cout<<"--...-";
						break;
					case 7:
						cout<<"---..-";
						break;
					case 8:
						cout<<"----.-";
						break;
					case 9:
						cout<<"------";
						break;
				}
			}
			else
			{
				break;
			}
		}
		cout<<'\n';
	}
	return 0;
}
