#include<iostream>
using namespace std;
class std1
{
	public:
		int i;
		std1();
		std1(int i1)
		{
			i=i1;
		}
};
std1::std1()
{
	cout<<"Default Constructor";
}
int main()
{
	std1 s;
	std1 s1(1);
	cout<<s1.i;
	return 0;
}
