//Binary Operator
#include<iostream> //Header File
using namespace std; //Standard
class Demo_bi
{
	public: //Access Specifier
	    int a,b;
	void print() //For Print Output
	{
		cout<<a<<endl<<b;
	}
};
int main() //Main Function For Starting Program
{
	Demo_bi d;
	d.print();
	return 0;
}
