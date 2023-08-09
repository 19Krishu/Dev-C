//Unary Operator
#include<iostream>
using namespace std;
class Demo_opdec
{
	public:
		int a;
		Demo_opdec(int i)
		{
			a=i;
		}
		void operator--(int)
		{
			a=a-2;
		}
		void print()
		{
			cout<<a;
		}
};
int main()
{
	Demo_opdec op(1),op1(2);
	op--;//Prefix Decrement
	op1--;
	op.print();
	op1.print();
	return 0;
}
