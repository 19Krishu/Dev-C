//Basic File Operation
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream myfile;
	myfile.open("Demo_file.txt");
	myfile<<"Written to a file";
	cout<<"Success";
	myfile.close();
	return 0;
}
