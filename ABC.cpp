#include<iostream>
using namespace std;
class demo
{
	
	public:
	int a,b;

    demo(int x,int y)
	{
		a=x;
		b=y;
		cout<<"constructor\n";
	}
	void display()
	{
		cout<<"values:"<<a<<"\t"<<b;
	}
};
	int main()
{
	demo object(20,30);
	object.display();
return 0;
}
