#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
	string a;
	while(cin>>a)
	{
		int i=0, j=0, k;
		int b=0;

		while(a[i]!=',')
			i++;
		while(a[j]!=')')
			j++;
		k=j-i-1;
		if(k==1&&a[i+1]=='0')
		{
			cout<<"1"<<endl;
			continue;
		}
		switch(a[i-1]-'0')
		{
			case 0:
				cout<<"0"<<endl;
				break;
			case 1:
				cout<<"1"<<endl;
				break;
			case 5:
				cout<<"5"<<endl;
				break;
			case 6:
				cout<<"6"<<endl;
				break;
			case 4:
				for(int m=i+1; m<j; m++)
					b=(b*10+(a[m]-'0'))%2;
				if(b==0)
				{
					cout<<"6"<<endl;
					break;
				}
				else
				{
					cout<<"4"<<endl;
					break;
				}
			case 9:
				for(int m=i+1; m<j; m++)
					b=(b*10+(a[m]-'0'))%2;
				if(b==0)
				{
					cout<<"1"<<endl;
					break;
				}
				else
				{
					cout<<"9"<<endl;
					break;
				}
			case 2:
				for(int m=i+1; m<j; m++)
					b=(b*10+(a[m]-'0'))%4;
				if(b==1)
				{
					cout<<"2"<<endl;
					break;
				}
				else if(b==2)
				{
					cout<<"4"<<endl;
					break;
				}
				else if(b==3)
				{
					cout<<"8"<<endl;
					break;
				}
				else if(b==0)
				{
					cout<<"6"<<endl;
					break;
				}
			case 3:
				for(int m=i+1; m<j; m++)
					b=(b*10+(a[m]-'0'))%4;
				if(b==1)
				{
					cout<<"3"<<endl;
					break;
				}
				else if(b==2)
				{
					cout<<"9"<<endl;
					break;
				}
				else if(b==3)
				{
					cout<<"7"<<endl;
					break;
				}
				else if(b==0)
				{
					cout<<"1"<<endl;
					break;
				}
			case 7:
				for(int m=i+1; m<j; m++)
					b=(b*10+(a[m]-'0'))%4;
				if(b==1)
				{
					cout<<"7"<<endl;
					break;
				}
				else if(b==2)
				{
					cout<<"9"<<endl;
					break;
				}
				else if(b==3)
				{
					cout<<"3"<<endl;
					break;
				}
				else if(b==0)
				{
					cout<<"1"<<endl;
					break;
				}
			case 8:
				for(int m=i+1; m<j; m++)
					b=(b*10+(a[m]-'0'))%4;
				if(b==1)
				{
					cout<<"8"<<endl;
					break;
				}
				else if(b==2)
				{
					cout<<"4"<<endl;
					break;
				}
				else if(b==3)
				{
					cout<<"2"<<endl;
					break;
				}
				else if(b==0)
				{
					cout<<"6"<<endl;
					break;
				}
		}
	}
	return 0;
}

