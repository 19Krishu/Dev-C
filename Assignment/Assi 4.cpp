#include<iostream>
using namespace std;
class mark
{
	public:
		int rno;
		string nm;
		int s1;
		int s2;
		int total; 
		int avg;
		void insert()
		{
			cout<<"enter roll number"<<endl;
			cin>>rno;
			cout<<"enter name"<<endl;
			cin>>nm;
			cout<<"enter subject 1 mark"<<endl;
			cin>>s1;
			cout<<"enter subject 2 mark"<<endl;
			cin>>s2;
					}
		void tot();
		void display();
};
void mark::tot()
{
	total=s1+s2;
	avg=total/2;
}
void mark::display()
{
	cout<<"roll number is:"<<rno<<endl;
	cout<<"name is:"<<nm<<endl;
	cout<<"subject 1 mark:"<<s1<<endl;
	cout<<"subject 2 mark:"<<s2<<endl;
	cout<<"total is:"<<total<<endl;
	cout<<"average is:"<<avg<<endl;
}
int main ()
{
	mark m[3];
	int i;
	for(i=0;i<3;i++)
	{
		m[i].insert();
		m[i].tot();
		m[i].display();
	}
	return 0;
}
