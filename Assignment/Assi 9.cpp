#include<iostream>
using namespace std;
class Shop 
{
	public:
	int	Code;
    string Name;
    int Price;
    int date;
    void insert()
    {
      cout<<"Enter Product Code :"<<Code<<endl;
      cin>>Code;
      cout<<"Enter Product Name :"<<Name<<endl;
      cin>>Name;
      cout<<"Enter Product Price :"<<Price<<endl;
      cin>>Price;
      cout<<"Enter Sold Date :"<<date<<endl;
      cin>>date;
   }
   void disp()
   	{
	cout<<"Product Code:"<<Code<<endl;
	cout<<"Product Name:"<<Name<<endl;
	cout<<"Product Price:"<<Price<<endl;
	cout<<"Sold Date:"<<date<<endl;
    }
};
int main()
{
	Shop s;
	s.insert();
	s.disp();
	return 0;
}
