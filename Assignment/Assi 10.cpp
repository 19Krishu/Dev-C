#include<iostream>
using namespace std;
class product
{
public:
	int pro_code,pro_prize,qty;
	string pro_name;
    void insert()
    {	cout<<"product code"<<endl;
        cin>>pro_code;
    	cout<<"product prize"<<endl;
    	cin>>pro_prize;
    	cout<<"product quantity"<<endl;
    	cin>>qty;
    	cout<<"product name"<<endl;
    	cin>>pro_name;
    	
	}
    void disp()
    {
    	cout<<"product code"<<endl<<pro_code<<endl;
    	cout<<"product prize"<<endl<<pro_prize<<endl;
    	cout<<"product quantity"<<endl<<qty<<endl;
    	cout<<"product name"<<endl<<pro_name;
	}
};
int main()
{
	product p;
	p.insert();
	p.disp();
return 0;	
}
