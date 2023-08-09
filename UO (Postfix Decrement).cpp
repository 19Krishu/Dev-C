// postfix operator decrement
#include<iostream>
using namespace std;
class demo
{
	public:
		int a;
		demo (int i)
		{
			a=i;
		}
		void print ()
		{
			cout<<a;
		}
		void operator --(int i)
		{
			a=a-5;
		}
};
int main ()
{
	demo d(50);
	d--;
	d.print();
	return 0;
}
