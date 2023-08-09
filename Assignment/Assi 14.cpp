#include<iostream>
using namespace std;
class item
{
	public:
	int i_qty,i_price,total;
	string i_name;
	void insert()
	{
		cout<<"enter quantity"<<endl;
		cin>>i_qty;
		cout<<"enter price"<<endl;
		cin>>i_price;
		cout<<"enter name"<<endl;
		cin>>i_name;
	}
	void caldata()
	{
		total=i_qty*i_price;
	}	
	void dis()
	{
		cout<<"product quantity is"<<endl<<i_qty<<endl;
		cout<<"product price is"<<endl<<i_price<<endl;
		cout<<"product name is"<<endl<<i_name<<endl;
		cout<<"product bill is"<<endl<<total;
	}
};
int main()
{
	item i;
    i.insert();
    i.caldata();
    i.dis();
    return 0;
}

