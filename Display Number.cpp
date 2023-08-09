//Display Number
#include<iostream>
using namespace std;
class read
{
	public:
		int no1,no2;
		void insert()
		{
			cout<<"Enter No.1 : ";
			cin>>no1;
			cout<<"Enter No.2 : ";
			cin>>no2;
			cout<<endl;
		}
		void disp();
};
void read::disp()
{
	cout<<"No.1 is : "<<no1<<endl;
	cout<<"No.2 is : "<<no2<<endl;
};
int main()
{
	read r;
	r.insert();
	r.disp();
	return 0;
}
