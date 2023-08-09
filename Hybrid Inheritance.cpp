//Hybrid Inheritance
#include<iostream>
using namespace std;
class stud
{
	public:
		int rno;
		string nm;
		void set()
		{
			cin>>rno>>nm;
		} 
};
class marks:public stud
{
	public:
		int s1,s2,s3;
		void set1()
		{
			cin>>s1>>s2>>s3;
		}
};
class sports
{
	public:
		int m;
		void set2()
		{
			cin>>m;
		}
};
class result:public marks,public sports
{
	public:
		int tot;
		int avg;
		void total()
		{
			tot=s1+s2+s3+m+avg;
			avg=(s1+s2+s3+m)/4;
			cout<<"Roll No is : "<<rno<<endl;
			cout<<"Name is : "<<nm<<endl;
			cout<<"Total is : "<<tot<<endl;
			cout<<"Average is : "<<avg<<endl;
			if(avg>20)
			{
				cout<<"Grade is A"<<endl;
			}
			else
			{
				cout<<"Grade is B";
			}
		}
};
int main()
{
	result r;
	
	r.set();
	r.set1();
	r.set2();
	r.total();
	return 0;
}
