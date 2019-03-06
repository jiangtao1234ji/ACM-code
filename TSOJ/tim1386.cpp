#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int sum=0;
		string str1="AC";
		if(n%2==0)
		{
			for(int i=0; i<n/2; i++)
			{
				string problem;
				string result;
				int time;
				string problem1;
				string result1;
				int time1;
				cin>>problem>>result>>time;
				if(result == str1)
					sum+=time;
				else
				{
					cin>>problem1>>result1>>time1;
					if(problem==problem1)
						if(result1==str1)
							sum+=time1+20;
						else
							sum+=40;
					else
						sum+=0;
				}

			}
		}
		else
		{
			string problem;
			string result;
			int time;
			cin>>problem>>result>>time;
			if(result == str1)
				sum+=time;
			for(int i=0; i<(n-1)/2; i++)
			{
				string problem1;
				string result1;
				int time1;
				string problem2;
				string result2;
				int time2;
				cin>>problem1>>result1>>time1;
				if(result!= str1)
					if(problem==problem1)
						sum+=20;
					else
						sum+=0;
				if(result1 == str1)
					sum+=time;
				else
				{
					cin>>problem2>>result2>>time2;
					if(problem1==problem2)
						if(result2==str1)
							sum+=time2+20;
						else
							sum+=40;
				}

			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

