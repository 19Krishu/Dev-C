#include<iostream>
using namespace std;
class student
{
	public:
	    int id;
	    string nm;
	    
	    void insert()
	    {
	    	cin>>id>>nm;
		}
		void disp();
		
};
void student::disp()
		{
			cout<<id<<nm;
		}
int main()
{
	student s;
	s.insert();
	s.disp();
	return 0;
}
