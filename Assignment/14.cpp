#include<iostream>
using namespace std;
class item
{
	public:
		string i_name;
		int i_qty;
		int i_price;
		int total;
		void get()
		{
			cout<<"Name Items:"<<endl;
			cin>>i_name;
			cout<<"Quantity:"<<endl;
			cin>>i_qty;
			cout<<"Price:"<<endl;
			cin>>i_price;
		}
		void caldata()
		{
			total=i_qty*i_price;
			cout<<"Your Bill:"<<endl;
		}
			void display()
		{
			cout<<"Name Items::"<<i_name<<endl;
			cout<<"Quantity:"<<i_qty<<endl;
			cout<<"Price:"<<i_price<<endl;
			cout<<"Total:"<<total<<endl;		
		}
};
int main()
{
	item b;
	b.get();
	b.caldata();
	b.display();
	return 0;
}
