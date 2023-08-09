//Static Function
#include<iostream>
using namespace std;
class stat1
{
	static int a;
	public:
		static int disp()
		{
			return a;
		}
};
int stat1::a=1;
int main()
{
	cout<<stat1::disp();
	return 0;
}
