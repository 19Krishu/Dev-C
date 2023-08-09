// Single Inheritance Addition
#include<iostream>
using namespace std;
class A
{
	public:
		int a=10;
		int b=10;
};
class B:public A
{
	public:
		void add()
		{
			cout<<a+b;
		}
};
int main()
{
	B b;
	b.add();
	return 0;
} 
