//Multilevel Herarchicaal Addition
#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		void disp_A()
		{
			cout<<"a : ";
			cin>>a;
		}
};
class B:public A
{
	public:
		int b;
		void disp_B()
		{
			cout<<"b : ";
			cin>>b;
		}
};
class C:public A
{
	public:
		int c;
		void disp_C()
		{
			cout<<"c : ";
			cin>>c;
		}
};
class D:public B
{
	public:
		int d;
		void add_D()
		{
			d=a+b+d;
			cout<<"d : ";
			cin>>d;
			cout<<"a+b+d : "<<a+b+d<<endl;
			cout<<endl;
		}
};
class E:public B
{
	public:
		int e;
		void add_E()
		{
			e=a+b+e;
			cout<<"e : ";
			cin>>e;
			cout<<"a+b+e : "<<a+b+e<<endl;
			cout<<endl;
		}
};
class F:public C
{
	public:
		int f;
		void add_F()
		{
			f=a+c+f;
			cout<<"f : ";
			cin>>f;
			cout<<"a+c+f : "<<a+c+f<<endl;	
			cout<<endl;
		}
};
int main()
{
	D d;
	d.disp_A();
	d.disp_B();
	d.add_D();
	
	E e;
	e.disp_A();
	e.disp_B();
	e.add_E();
	
	F f;
	f.disp_A();
	f.disp_C();
	f.add_F();
	return 0;
}

