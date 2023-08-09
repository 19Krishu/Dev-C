//Unary Operator
#include<iostream>
using namespace std;
class Demo_op
{
	public:
		int a;
	Demo_op(int i)
	{
		a=i;
	}
	void print()
	{
		cout<<a;
	}
	void operator ++()	
	{
		a=a+2;
	}
};
int main()
{
	Demo_op o(8);
	++o;
	o.print();
	return 0;
}
