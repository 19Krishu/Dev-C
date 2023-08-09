// Function Overloading with Diff.Return Type
#include<iostream>
using namespace std;
class add1
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
		float add(float a,float b,float c)
		{
			return a+b+c;
		}
};
int main()
{
	add1 a;
	cout<<a.add(1,2);
	cout<<endl<<a.add(2.0,3.2,4.3);
	return 0;
}

