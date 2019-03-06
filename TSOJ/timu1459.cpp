#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	string a, b;
	while(cin>>a>>b)
	{
		int count1 = 0, counta1 = 0, countb1 = 0, suma1 = 0, sumb1 = 0;
		int count2 = 0, counta2 = 0, countb2 = 0, suma2 = 0, sumb2 = 0;
		int k1 = 0, k2 = 0, k3 = 0, k4 = 0;
		vector<int> a1, b1, a2, b2;
		for(int i=0; i<a.size(); ++i)
		{
			if(a[i] == 'c')
			{
				count1++;
				a1.push_back(counta1);
				b1.push_back(countb1);
				counta1 = 0;
				countb1 = 0;
			}
			if(a[i] == 'a')
			{
				suma1++;
				counta1++;
			}
			if(a[i] == 'b')
			{
				sumb1++;
				countb1++;
			}
		}
		for(int i=0; i<b.size(); ++i)
		{
			if(b[i] == 'c')
			{
				count2++;
				a2.push_back(counta2);
				b2.push_back(countb2);
				counta2 = 0;
				countb2 = 0;
			}
			if(b[i] == 'a')
			{
				suma2++;
				counta2++;
			}
			if(b[i] == 'b')
			{
				sumb2++;
				countb2++;
			}
		}
		if(count1 != count2)
			cout<<"No"<<endl;
		else
		{
			if(count1 == 0)
			{

				if(suma1 == suma2 && sumb1 == sumb2)
					cout<<"Yes"<<endl;
				else
					cout<<"No"<<endl;
			}
			else
			{
				while(1)
				{
					if(k1 == a1.size())
					{
						cout<<"Yes"<<endl;
						break;
					}
					if(a1[k1] == a2[k2] && b1[k3] == b2[k4])
					{
						k1++;
						k2++;
						k3++;
						k4++;
					}
					else
					{
						cout<<"No"<<endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}

