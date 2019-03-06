#include<iostream>
#include<string>
#include<algorithm>
#define UTC 0
#define BST UTC+1 
#define IST UTC+1 
#define WET UTC
#define WEST UTC+1 
#define CET UTC+1
#define CEST UTC+2
#define EET UTC+2
#define EEST UTC+3
#define MSK UTC+3
#define MSD UTC+4
#define AST UTC-4 
#define ADT UTC-3 
#define NST UTC-3.5 
#define NDT UTC-2.5 
#define EST UTC-5
#define EDT UTC-4 
#define CST UTC-6 
#define CDT UTC-5
#define MST UTC-7 
#define MDT UTC-6
#define PST UTC-8 
#define PDT UTC-7 
#define HST UTC-10 
#define AKST UTC-9
#define AKDT UTC-8 
#define AEST UTC+10 
#define AEDT UTC+11 
#define ACST UTC+9.5 
#define ACDT UTC+10.5 
#define AWST UTC+8 

using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		for(int i=0; i<n; i++)
		{
			string a;
			string b;
			string c;
			string d;
			cin>>a;
			if(a == "noon" && a == "midnight")
				cin>>b;
			cin>>c;
			cin>>d;
			
			
			
		}
	}
	
	return 0;
}

