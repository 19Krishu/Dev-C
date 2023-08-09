#include<iostream>
using namespace std;
class add
{
	public :
		int addition(int a,int b,int c=12,int d=78)
		{
			return a+b+c+d;
		}
};
int main()
{
add a;
cout<<a.addition(12,33);
return 0;
}

