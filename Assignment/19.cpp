#include<iostream>
using namespace std;
class Student
{
	public:
		int rno;
		void getnumber()
		{
			cout<<"Enter Your Roll No : ";
			cin>>rno;
		}
		void putnumber()
		{
			cout<<"Roll No"<<rno<<endl;
		}
};
class Test : virtual public Student
{
	public:
		int p1,p2;
		void getmarks()
		{
			cout<<"Enter Marks : "<<endl;
			cout<<"Part - 1 : ";
			cin>>p1;
			cout<<"Part - 2 : ";
			cin>>p2;
		}
		void putmarks()
		{
			cout<<"Obtained Marks : "<<endl;
			cout<<"Part 1 : "<<p1<<endl;
			cout<<"Part 2 : "<<p2<<endl;
		}
};
class Sports : virtual public Student
{
	public:
		int score;
		void getscore()
		{
			cout<<"Enter Your Sports Score : ";
			cin>>score;
			cout<<endl;
		}
		void putscore()
		{
			cout<<"Sports Score is : "<<score<<endl;
		}
};
class Result : public Test , public Sports
{
	public:
		int total;
		void display()
		{
			total = p1+p2+score;
			putnumber();
			putmarks();
			putscore();
			cout<<"Total Score : "<<total<<endl;
		}
};
int main()
{
	Result r;
	r.getnumber();
	r.getmarks();
	r.getscore();
	r.display();
	return 0;
}
