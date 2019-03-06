#include <iostream>
#include <string>
class Company
{
	public:
		Company(std::string theName);
		virtual void printInfo();
	protected:
		std::string name;	
};

class TechCompany: public Company
{
	public:
		TechCompany(std::string theName, std::string product);
		virtual void printInfo();
	private:
		std::string product;
};

Company::Company(std::string theName):name(theName)
{
}

void Company::printInfo()
{
	std::cout<<"the company's name is:"<<name<<".\n";
}

TechCompany::TechCompany(std::string theName, std::string product) : Company(theName)
{
	this->product=product;
}

void TechCompany::printInfo()
{
	std::cout<<name<<"the company product:"<<product<<"\n";
}

int main()
{
	Company *company = new Company("APPLE");
	company->printInfo();
	
	delete company;
	company = NULL;
	
	company = new TechCompany("APPLE","GAME");
	company->printInfo();
	
	delete company;
	company = NULL;
	
	return 0;	
}

