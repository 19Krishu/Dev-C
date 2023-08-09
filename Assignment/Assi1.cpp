//demo program of employee
#include<iostream>//input,output,sequence bytes
using namespace std;//standard,unique identification
class emp
{
	public://access specifier
	int eno;
	string enm;
	int basic,ta,da,pf,net_salary;
	
	void insert()
	{
	  	cout<<"Employe ID"<<endl;
	  	cin>>eno;
	  	cout<<"Employe Name"<<endl;
	  	cin>>enm;
	  	cout<<"Employe Basic Salary"<<endl;
	  	cin>>basic;
	}
	void calc()
	{
		ta=basic*5/100;
		da=basic*5/100;
		pf=basic*2/100;
		net_salary=basic+ta+da-pf;
		
	}
	void display()
	{
		cout<<"output"<<endl;
		
		cout<<"_____"<<endl;
		cout<<"Employe ID;"<<eno<<endl;
	  	cout<<"Employe Name: "<<enm<<endl;
	  	cout<<"Employe net_salary: "<<net_salary<<endl;
	  	cout<<"_____"<<endl;
	}
};
int main()
{
	emp e;
	e.insert();
	e.calc();
	e.display();
	return 0;
}
