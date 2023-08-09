//unary operator
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
	demo_op d(8),op1(5);
	++d;
	++op1;
	d.print();
	return 0;
	
}
