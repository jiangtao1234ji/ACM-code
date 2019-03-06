#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool judge(int a, int b, int c)
{
	if(a+b>c)
		if(a+c>b)
			if(b+c>a)
				return true;
	return false;
}

int main()
{
	int a, b, c;
	while(cin>>a>>b>>c)
	{
		if(judge(a,b,c))
		{
			if(a==b&&b==c)
				cout<<"regular triangle"<<endl;
			else if(a==b||a==c||b==c)
				cout<<"isosceles triangle"<<endl;
			else if(((a*a+b*b)==c*c)||((a*a+c*c)==b*b)||((c*c+b*b)==a*a))
				cout<<"right triangle"<<endl;
			else
				cout<<"triangle"<<endl;
		} 
		else
			cout<<"not a triangle"<<endl;
	}
	return 0;
}

