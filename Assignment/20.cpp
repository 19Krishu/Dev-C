#include<iostream>
using namespace std;
class Student
{
	public:
		int r_no;
		string s_nm; 
		string clg_name;
		
		void get_1()
		
		{
			cout<<"Enter Your Roll No : ";
			cin>>r_no;
			cout<<"Enter Student Name : ";
			cin>>s_nm;
			cout<<"Enter Collage Name : ";
			cin>>clg_name;
		}
};
class Test : public Student
{
	public:
		int sub_1,sub_2,sub_3,sub_4,sub_5,sub_6;
		 
		void get_2()
		
		{
			cout<<"Enter Sunject 1 Marks : ";
			cin>>sub_1;
			cout<<"Enter Sunject 2 Marks : ";
			cin>>sub_2;
			cout<<"Enter Sunject 3 Marks : ";
			cin>>sub_3;
			cout<<"Enter Sunject 4 Marks : ";
			cin>>sub_4;
			cout<<"Enter Sunject 5 Marks : ";
			cin>>sub_5;
			cout<<"Enter Sunject 6 Marks : ";
			cin>>sub_6;
		}
};
class Result : public Test
{
	public:
		int total;
		int percentage;
		
		void get_3()
		
		{
			total = sub_1+sub_2+sub_3+sub_4+sub_5+sub_6;
			percentage = total*100/600;
			cout<<"Total Marks : "<<total<<endl;
			cout<<"Percentage : "<<percentage<<endl;
		}
};
int main()
{
	Result r;
	r.get_1();
	r.get_2();
	r.get_3();
	return 0;
}
