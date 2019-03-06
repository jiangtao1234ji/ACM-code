#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
	public:
		A(int i = 0):a(i) {}
};


class B :public A
{
	public:
		B():A(5) {}
		void printinfo()
		{
			cout<< a<< endl;
		}
};
int main()
{
	
	
}
