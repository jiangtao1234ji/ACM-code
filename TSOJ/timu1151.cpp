#include<iostream>
#include<fstream>
#include<string>
using namespace std;

string haab[19]= {"pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};
string tzolkin[20]= {"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};

int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0;  i<n; i++)
		{
			int day,year;
			string month;
			cin>>day;
			cin>>month;
			cin>>year;
			
			int j;
			for(j=0; j<19; j++)
			{
				if(haab[j]==month)
					break;
			}
			int date;
			date=day+20*j+year*365;
			
			year=date/260;
			date=date%260;
			int mth=date%20;
			day=date%13;
			cout<<day+1<<" "<<tzolkin[mth]<<" "<<year<<endl;
		}
	}
	return 0;
}
