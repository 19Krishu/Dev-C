//Single Inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			int a=10;
			cout<<"A"<<a<<endl;
		}
};
class B:public A
{
	public:
		void display1()
		{
			int b=20;
			cout<<"B"<<b<<endl;
		}
};
int main()
{
	B b;
	b.display();
	b.display1();
	return 0;
}
