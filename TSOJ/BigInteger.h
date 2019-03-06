#include<vector>
#include<string>
#include<cstring>

typedef long long LL;

struct BigInteger
{
	static const int BASE = 1e8;
	static const int WIDTH = 8;
	std::vector<int> s;

	BigInteger(LL num = 0)
	{
		*this = num;
	}

	BigInteger operator = (LL num)
	{
		s.clear();
		do
		{
			s.push_back(num % BASE);
			num /= BASE;
		}
		while(num>0);
		return *this;
	}

	BigInteger operator = (const std::string & str)
	{
		s.clear();
		int x, len = (str.length() - 1) / WIDTH + 1;
		for(int i=0; i<len; ++i)
		{
			int end = str.length() - i*WIDTH;
			int start = std::max(0, end - WIDTH);
			sscanf(str.substr(start, end - start).c_str(), "%d", &x);
			s.push_back(x);
		}
		return *this;
	}

	BigInteger operator + (const BigInteger& b) const
	{
		BigInteger c;
		c.s.clear();
		for(int i=0, g=0; ; i++)
		{
			if(g == 0 && i >= s.size() && i >= b.s.size())
				break;
			int x = g;
			if(i < s.size())
				x += s[i];
			if(i < b.s.size())
				x += b.s[i];
			c.s.push_back(x % BASE);
			g = x / BASE;
		}
		return c;
	}

	BigInteger operator += (const BigInteger& b)
	{
		*this = *this + b;
		return *this;
	}

	BigInteger operator + (const BigInteger& b) const
	{
		BigInteger c;
		c.s.clear();
		for(int i=0, g=0; ; i++)
		{
			if(g == 0 && i >= s.size() && i >= b.s.size())
				break;
			int x = g;
			if(i < s.size())
				x += s[i];
			if(i < b.s.size())
				x += b.s[i];
			c.s.push_back(x % BASE);
			g = x / BASE;
		}
		return c;
	}

	BigInteger operator += (const BigInteger& b)
	{
		*this = *this + b;
		return *this;
	}


};

std::ostream& operator << (std::ostream &out, const BigInteger &x)
{
	out<<x.s.back();
	for(int i = x.s.size()-2; i>= 0; i--)
	{
		char buf[20];
		sprintf(buf, "%08d", x.s[i]);
		for(int j=0; j<strlen(buf); j++)
			out << buf[j];
	}
	return out;
}

std::istream& operator >> (std::istream &in, BigInteger& x)
{
	std::string s;
	x = s;
	return in;
}




