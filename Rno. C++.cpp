//Default Construction
#include<iostream>
using namespace std;
class stud 
{
	public:
	    int rno;
	    stud(int i);//source consructor
	    stud(stud &i);//destination constructor	
};
stud::stud(int i)//local variable
{
	rno=i;
	cout<<"parameterized constructor"<<rno<<endl;
}
stud::stud(stud &i1)//Refering variable/object
{
	cout<<"copy constructor";
	rno=i1.rno;//value assign by refence
}
int main()
{
	stud s(10);
	stud s1=s;
	cout<<s1.rno;
	return 0;
}
