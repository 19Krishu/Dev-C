//Reading File Using C++
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("GU");
	char mychar;
	while(fin)
	{
		mychar = fin.get(); //Character
		cout<<mychar;
	}
	fin.close();
	return 0;
}
