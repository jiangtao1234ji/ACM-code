#include<iostream>

using namespace std;

double hx(double theta,double x)
{
	double hy;
	hy=theta+theta*x;
	return hy;
}

double jx(double hy[n],double y[n], int n)
{
	double answer;
	for(int i=0; i<n; i++)
	{
		answer=answer+(hy[i]-y[i])*(hy[i]-y[i])*0.5;
	}
	return answer;
}

double tiaozhen(double x[n], double y[n])
{
	double hy[n], theta=0, he=0;;
	for(int i=0; i<n; i++)
	{
		hy[i]=hx(theta, x[i]);
		he+=(hx(theta, x[i])-y[i])*x[i];
	}
	theta=theta-0.00001*he;
	return theta;
}
int main()
{
	int n;
	while(cin>>n)
	{
		double answer;
		double x[n], y[n];
		for(int i=0; i<n; i++)
		{
			cin>>x[i]>>y[i];
		}
		for(int i=0; i<n; i++)
		{

			hx(theta,x)
		}
		cout<<answer<<endl;
	}
}
