#include<iostream>
using namespace std;
class student
{
	public:
	    int id;
	    string nm;
};
int main()
{
	student s;
	s.id=10;
	s.nm="abc";
	cout<<s.id<<endl;
	cout<<s.nm;
}
