//Single Inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		void dis()
		{
			cout<<"Class A"<<endl;
		}
};
class B:public A
{
	public:
		void disp()
		{
			cout<<"Class B";
		}
};
int main()
{
	B b;
	b.dis();
	b.disp();
	return 0;
}
