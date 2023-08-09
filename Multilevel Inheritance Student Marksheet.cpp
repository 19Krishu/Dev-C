//Multiple Inheritance for Student Marksheet
#include<iostream>
using namespace std;
class A
{
	public:
		int rno;
		string nm;
		void set()
		{
			cout<<"**Marksheet**"<<endl;
			cout<<"Roll No : ";
			cin>>rno;
			cout<<"Name : ";
			cin>>nm;
		}
		
};
class B:public A
{
	public:
		int s1,s2;
		void set1()
		{
			cout<<"Sub 1 : ";
			cin>>s1;
			cout<<"Sub 2 :";
			cin>>s2;
		}
		
};
class C:public B
{	
	public:
		int tot;
		int avg;
		void total()
		{
			tot=s1+s2;
			avg=(s1+s2)/2;
			cout<<endl;
			 
			 
			cout<<"**Final Marksheet**"<<endl;
			
			cout<<"Roll No : "<<rno<<endl;
			cout<<"Name : "<<nm<<endl;
			cout<<"Total :  "<<s1+s2<<endl;
			cout<<"Average : "<<avg<<endl;
		}
};
int main()
{
	C c;
	c.set();
	c.set1();
	c.total();	
	return 0;
}
