#include<iostream>
using namespace std;
class Student
{
	public:
		int rno;
		string nm;
		void set()
		{
			cout<<"Enter Your Roll No : ";
			cin>>rno;
			cout<<"Enter Your Name : ";
			cin>>nm;
		}
};
class Marks : public Student
{
	public:
		int s1,s2,s3,s4,s5,s6;
		void set1()
		{
			cout<<"Subject 1";
			cin>>s1;
			cout<<"Subject 2";
			cin>>s2;
			cout<<"Subject 3";
			cin>>s3;
			cout<<"Subject 4";
			cin>>s4;
			cout<<"Subject 5";
			cin>>s5;
			cout<<"Subject 6";
			cin>>s6;
		}
};
class Sports : public Student
{
	public:
		int m;
		void set2()
		{
			cout<<"Sports Marks : ";
			cin>>m;
		}
};
class Result : public Marks , public Sports
{
	public:
		int tot;
		int avg;
		void total()
		{
			tot = s1+s2+s3+s4+s5+s6+m;
			avg = tot/7;
			
			cout<<"Total : "<<tot<<endl;
			cout<<"Average : "<<avg<<endl;
		}
};
int main()
{
	Result r;
	r.set();
	r.set1();
	r.set2();
	r.total();
	return 0;
}
