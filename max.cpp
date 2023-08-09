#include<iostream>
using namespace std;
 
int main()
{
	int a,b,max;
	cout<<"enter the two number:";
	cin>>a>>b; // a=10 b=50
	/*if(a>b)  // 10>50
	{
	    cout<<"a="<<a;// a=20
	}
	else
	{
	    cout<<"b="<<b;
	}*/
	max=(a>b)?a:b;
	cout<<"max";
	return 0;
}
