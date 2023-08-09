//Unary Operator
#include<iostream>
using namespace std;
class demo_op
{
	public:
		int a;
		demo_op(int i)
		{
			a=i;
		}
		void operator++()
		{
			a=a+2;
		}
		void print()
		{
			cout<<a;
		}
};
int main()
{
	demo_op op(1),op1(2);
	++op;//Prefix Increment
	++op1;
	op.print();
	op1.print();
	return 0;
}
