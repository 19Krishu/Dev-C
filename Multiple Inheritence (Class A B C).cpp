//Multiple Inheritence
#include<iostream>
using namespace std;
class A
{
	public:
		void disp()
		{
			int a=10;
			cout<<"A"<<endl;
			cout<<a<<endl;
		}
};
class B:public A
{
	public:
		void disp1()
		{
			int b=20;
			cout<<"B"<<endl;
			cout<<b<<endl;
		}
};
class C:public A
{
	public:
		void disp2()
		{
			cout<<"C";
		}
};
int main()
{
	B b;
	b.disp1();
	b.disp();
	C c;
	c.disp2();
	c.disp();
	return 0;
}
