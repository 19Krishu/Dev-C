// Function Overloading with Diff.Parameter
#include<iostream>
using namespace std;
class sub1
{
	public:
		void sub(int a,int b)
		{
			cout<<a-b;
		}
		void sub(int a,int b,int c)
		{
			cout<<a-b-c;
		}
};
int main()
{
	sub1 a;
	a.sub(4,2);
	a.sub(6,4,2);
	return 0;
}
