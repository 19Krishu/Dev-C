//Multilevel Herarchicaal
#include<iostream>
using namespace std;
class A
{
	public:
		void disp_A()
		{
			cout<<"A"<<endl;
		}
};
class B:public A
{
	public:
		void disp_B()
		{
			cout<<"B"<<endl;
		}
};
class C:public A
{
	public:
		void disp_C()
		{
			cout<<"C"<<endl;
		}
};
class D:public B
{
	public:
		void disp_D()
		{
			cout<<"D"<<endl;
		}
};
class E:public B
{
	public:
		void disp_E()
		{
			cout<<"E"<<endl;
		}
};
class F:public C
{
	public:
		void disp_F()
		{
			cout<<"F"<<endl;
		}
};
int main()
{
	D d;
	d.disp_A();
	d.disp_B();
	d.disp_D();
	
	E e;
	e.disp_A();
	e.disp_B();
	e.disp_E();
	
	F f;
	f.disp_A();
	f.disp_C();
	f.disp_F();
	return 0;
}

