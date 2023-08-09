#include<iostream>
using  namespace std;
class stud
{
	public:
		int rno;
		string nm;
		void set()
		{
			
			cout<<"Enter the Roll No :"<<endl;
			cin>>rno;
			cout<<"Enter the Name :"<<endl;
			cin>>nm;
		}
};
class marks : public stud
{
	public:
		int s1,s2,s3,s4;
		void set1()
		{
			
			cout<< "Subject 1 :" <<endl;
			cin>>s1;
			cout<< "Subject 2 :" <<endl;
			cin>>s2;
			cout<< "Subject 3 :" <<endl;
			cin>>s3;
			cout<< "Subject 4 :" <<endl;
			cin>>s4;
		}
};
class sport
{
	public:
		int m;
		void set2()
		{
			cin>>m;
			
		}
};
class result : public marks , public sport
{
	public:
		int tot;
		void add()
		{
			tot=s1+s2+s3+s4+m;
			cout<<" Roll No is :"<<rno<<endl;
			cout<<" Name is :"<<nm<<endl;
			cout<<"Total is :"<<tot;
		}
};
int main()
{
	result r;
	r.set();
	r.set1();
	r.set2();
	r.add();
	
	return 0;
}

	
