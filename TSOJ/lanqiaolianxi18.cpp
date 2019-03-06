#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool check(int a[])
{
	int count=0;
	for(int i=0; i<9; i++)
	{
		if(a[i]==1)
			count++;
	}
	if(count==4)
		return true;
	else
		return false;
}
int main()
{
	int count=0;
	int a[9]= {0};
	for(int i=0; i<(1<<9); i++)
	{
		for(int j=0; j<9; j++)
		{
			if((1<<j)&i)
			{

				if(i==0)
				{
					if(a[2]==0)
						a[2]=1;
					else
						a[2]=0;
					if(a[4]==0)
						a[4]=1;
					else
						a[4]=0;
					if(check(a))
					{
						for(int i=0; i<9; i++)
						{
							cout<<a[i];
						}
						cout<<endl;
						break;
					}
				}
				if(i==1)
				{
					if(a[1]==0)
						a[1]=1;
					else
						a[1]=0;
					if(a[3]==0)
						a[3]=1;
					else
						a[3]=0;
					if(a[5]==0)
						a[5]=1;
					else
						a[5]=0;
					if(check(a))
					{
						for(int i=0; i<9; i++)
						{
							cout<<a[i];
						}
						cout<<endl;
						break;
					}

				}
				if(i==2)
				{
					if(a[2]==0)
						a[2]=1;
					else
						a[2]=0;
					if(a[6]==0)
						a[6]=1;
					else
						a[6]=0;
					if(check(a))
					{
						for(int i=0; i<9; i++)
						{
							cout<<a[i];
						}
						cout<<endl;
						break;
					}
				}
				if(i==3)
				{
					if(a[1]==0)
						a[1]=1;
					else
						a[1]=0;
					if(a[5]==0)
						a[5]=1;
					else
						a[5]=0;
					if(a[7]==0)
						a[7]=1;
					else
						a[7]=0;
					if(check(a))
					{
						for(int i=0; i<9; i++)
						{
							cout<<a[i];
						}
						cout<<endl;
						break;
					}
				}
				if(i==4)
				{
					if(a[2]==0)
						a[2]=1;
					else
						a[2]=0;
					if(a[4]==0)
						a[4]=1;
					else
						a[4]=0;
					if(a[6]==0)
						a[6]=1;
					else
						a[6]=0;
					if(a[8]==0)
						a[8]=1;
					else
						a[8]=0;
					if(check(a))
					{
						for(int i=0; i<9; i++)
						{
							cout<<a[i];
						}
						cout<<endl;
						break;
					}
				}
				if(i==5)
				{
					if(a[3]==0)
						a[3]=1;
					else
						a[3]=0;
					if(a[5]==0)
						a[5]=1;
					else
						a[5]=0;
					if(a[9]==0)
						a[9]=1;
					else
						a[9]=0;
					if(check(a))
					{
						for(int i=0; i<9; i++)
						{
							cout<<a[i];
						}
						cout<<endl;
						break;
					}
				}
				if(i==6)
				{
					if(a[4]==0)
						a[4]=1;
					else
						a[4]=0;
					if(a[8]==0)
						a[8]=1;
					else
						a[8]=0;
					if(check(a))
					{
						for(int i=0; i<9; i++)
						{
							cout<<a[i];
						}
						cout<<endl;
						break;
					}
				}
				if(i==7)
				{
					if(a[5]==0)
						a[5]=1;
					else
						a[5]=0;
					if(a[7]==0)
						a[7]=1;
					else
						a[7]=0;
					if(a[9]==0)
						a[9]=1;
					else
						a[9]=0;
					if(check(a))
					{
						for(int i=0; i<9; i++)
						{
							cout<<a[i];
						}
						cout<<endl;
						break;
					}
				}
				if(i==8)
				{
					if(a[6]==0)
						a[6]=1;
					else
						a[6]=0;
					if(a[8]==0)
						a[8]=1;
					else
						a[8]=0;
					if(check(a))
					{
						for(int i=0; i<9; i++)
						{
							cout<<a[i];
						}
						cout<<endl;
						break;
					}
				}
			}
		}
	}

	return 0;
}

