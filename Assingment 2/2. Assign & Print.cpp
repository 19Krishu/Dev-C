#include<iostream>
#include<string>
using namespace std;
class Student
{
	public:
		Student(string Name , string Roll_no , string Phn_no , string Address)
		{
setDetails(Name , Roll_no , Phn_no , Address);
        }
        void setDetails(string Name , string Roll_no , string Phn_no , string Address)
        {
        	StudentName=Name;
        	StudentRoll_no=Roll_no;
        	StudentPhn_no=Phn_no;
        	StudentAddress=Address;
		}
		string getDetails()
		{
			cout<<StudentName<<endl;
			cout<<StudentRoll_no<<endl;
			cout<<StudentPhn_no<<endl;
			cout<<StudentAddress<<endl;
		}
		private:
			string StudentName;
			string StudentRoll_no;
			string StudentPhn_no;
			string StudentAddress;
};
int main()
{
	Student Student1("Neel" , "1" , "7621936361" , "B/702-Corus Hights");
	Student Student2("Krishu" , "2" , "9913190204" , "C/201-Shaligram Square");
	cout<<Student1.getDetails()<<endl;
	cout<<Student2.getDetails()<<endl;
	return 0;	
}

