//Binary Operator
#include<iostream> //Header File
using namespace std; //Standard
class Demo_biadd
{
	public: //Access Specifier
	    int a,b;
	    Demo_biadd(int i=0,int j=0) //Local Variable
	    {
	    	a=i;
	    	b=j;
		}
	Demo_biadd operator + (Demo_biadd &b2) //Object Reference Pass
	{
		Demo_biadd b1; //Object Creation
		b1.a=a+b2.a;
		b1.b=b+b2.b;
		return b1;
	}
	void print() //For Print Output
	{
		cout<<a<<endl<<b;
	}
};
int main() //Main Function For Starting Program
{
	Demo_biadd d(10,20),d1(20,30);
	Demo_biadd d2=d+d1;
	d2.print();
	return 0;
}
