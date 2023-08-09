//File Managmenet in C++
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("GU");
	if(fout.is_open())
	{
		fout<<"Hello Students\n";
		fout<<"Gujarat University";
	}
	else
	{
		cout<<"Unable to Open";
	}
	fout.close();
	return 0;
}
