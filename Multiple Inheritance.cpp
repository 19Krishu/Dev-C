//Multiple Inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		void set()
		{
			cin>>a;
		}
};
class B
{
	public:
		int b;
		void set1()
		{
			cin>>b;
		}
};
class C:public A,public B
{
	public:
		void add()
		{
			cout<<a+b;
		}
};
int main()
{
	C c;
	c.set();
	c.set1();
	c.add();
	return 0;
}
