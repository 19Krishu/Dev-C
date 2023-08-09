// Function Overloading with Diff.Return Type
#include<iostream>
using namespace std;
class sub1
{
	public:
		int sub(int a,int b)
		{
			return a-b;
		}
		float sub(float a,float b,float c)
		{
			return a-b-c;
		}
};
int main()
{
	sub1 a;
	cout<<a.sub(1,2);
	cout<<endl<<a.sub(6.0,2.2,1.3);
	return 0;
}
