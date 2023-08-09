//Simmple Inhertance
#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		int b;
		void set (int i , int j )
		{
			a = i;
			b = j;
		}
};
class B: public A
{
	public:
	void add()
	{
    	cout<<"Addition is : "<<a+b;
    }
};
int main()
{
	B b;
	b.set(30,20);
	b.add();
	return 0;
}
