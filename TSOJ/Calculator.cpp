#include<iostream>
#include<sstream>
#include<cmath>
#include<stack>

using namespace std;

class Calculator
{
	private:
		stack<double> s;
		void enter(double num);
		bool getTwoOperands(double &opnd1, double &opnd2);
		void compute(char op);
	public:
		void run();
		void clear();
};

void Calculator::enter(double num)
{
	s.push(num);
}

bool Calculator::getTwoOperands(double &opnd1, double &opnd2)
{
	if(s.empty())
		return false;
	opnd1 = s.top();
	s.pop();
	if(s.empty())
		return false;
	opnd2 = s.top();
	s.pop();
	return true;
}

void Calculator::compute(char op)
{
	double operand1, operand2;
	bool result = getTwoOperands(operand1, operand2);

	if(result)
	{
		switch(op)
		{
			case'+':
				s.push(operand2+operand1);
				break;
			case'-':
				s.push(operand2-operand1);
				break;
			case'*':
				s.push(operand2*operand1);
				break;
			case'/':
				if(operand1 == 0)
					while(!s.empty())
						s.pop();
				else
					s.push(operand2/operand1);
				break;
			case'^':
				s.push(pow(operand2,operand1));
		}
		cout<<s.top()<<endl;
	}
	else
		while(!s.empty())
			s.pop();
}

inline double stringToDouble(const string &str)
{
	istringstream stream(str);
	double result;
	stream>>result;
	return result;
}

void Calculator::run()
{
	string str;
	while(cin>>str)
	{
		switch(str[0])
		{
			case'-':
				if(str.size() > 1)
					enter(stringToDouble(str));
				else
					compute(str[0]);
				break;
			case'+':
			case'*':
			case'/':
			case'^':
				compute(str[0]);
				break;
			default:
				enter(stringToDouble(str));
				break;
		}
	}
}

void Calculator::clear()
{
	while(!s.empty())
		s.pop();
}

int main()
{
	Calculator c;
	c.run();
	return 0;
}












