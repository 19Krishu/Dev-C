// Function Overloading with Diff.Parameter
#include<iostream>
using namespace std;
class add1
{
	public:
		void add(int a,int b)
		{
			cout<<a+b;
		}
		void add(int a,int b,int c)
		{
			cout<<a+b+c;
		}
};
int main()
{
	add1 a;
	a.add(1,2);
	a.add(2,3,4);
	return 0;
}

