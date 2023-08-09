//Writting a text file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream myfile("demo_f.txt");
	if(myfile.is_open())
	{
		myfile<<"This is file\n";
		myfile<<"Another Line";
		myfile.close();
	}
	else
	{
		cout<<"Unable to open";
	}
	return 0;
}
