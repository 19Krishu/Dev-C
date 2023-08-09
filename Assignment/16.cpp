#include<iostream>
using namespace std;
class First 
{
	public:
		string c_name;
		string modal;
		void get_1()
		{
			cout<<"Enter car name:"<<endl;
			cin>>c_name;
			cout<<"Enter car Modal:"<<endl;
			cin>>modal;
			
		}
};
class Second:public First
{
	public:
		int c_no;
		int year;
		void get_2()
		{
			cout<<"Enter car number:"<<endl;
			cin>>c_no;
			cout<<"Enter car year:"<<endl;
			cin>>year;	
		}
};
class Third:public Second
{
	public:
		void display()
	{
		cout<<"car name:"<<c_name<<endl;
		cout<<"car Modal:"<<modal<<endl;
		cout<<"car Number:"<<c_no<<endl;
		cout<<"car year:"<<year<<endl;
	}	
};
int main()
{
	Third t;
	t.get_1();
	t.get_2();
	t.display();
	return 0;
}
