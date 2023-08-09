#include<iostream>
using namespace std;
class Institute
{
	public:
		string nm;
		string add;			
		string city;
		int ph_no;
	    string gender;
	    int age;
		void insert()
		{
			cout<<"enter faculty name"<<endl;
			cin>>nm;
			cout<<"enter address"<<endl;
			cin>>add;
			cout<<"enter city name"<<endl;
			cin>>city;
			cout<<"enter phone no"<<endl;
			cin>>ph_no;
			cout<<"enter gender "<<endl;
			cin>>gender;
			cout<<"enter age of faculty "<<endl;
			cin>>age;
		}
	
};

void mark :: disp()
{
	cout<<"roll number is "<<r_no<<endl;
	cout<<"name is "<<nm<<endl;
	cout<<"subject 1 mark is "<<s1<<endl;
	cout<<"subject 2 mark is "<<s2<<endl;
	cout<<"total is "<<total1<<endl;
	cout<<"avarage is "<<avg<<endl;
}

int main()
{
	mark m;
	m.insert();
	
	m.disp();
	return 0 ;
}
