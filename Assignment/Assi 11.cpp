#include<iostream>
using namespace std;
class media
{
 public:
 	int price;
 	string title;

 	
};
class harddisk: public media
{
	public:
	string hd_type;
	int qty;
	
	harddisk();
	harddisk(int qty1,string hd,int price1,string title1)
	{
		qty=qty1;
		hd_type=hd;
		price=price1;
		title=title1;
	}
	void disp()
	{    
		cout<<"harddisk type"<<endl<<hd_type<<endl;
		cout<<"harddisk quantity"<<endl<<qty<<endl;
		cout<<"media title"<<endl<<title<<endl;
	    cout<<"media price"<<endl<<price<<endl;
	}
	
};
class pendrive:public media
{
	public:
	string pd_type;
	int qt;
	pendrive();
	pendrive(int qt1,string pd,int price1,string title1)
	{
		qt=qt1;
		pd_type=pd;
		price=price1;
		title=title1;
	}
		void disp1()
	{    
		cout<<"pendrive type"<<endl<<pd_type<<endl;
		cout<<"pendrive quantity"<<endl<<qt<<endl;
		cout<<"media title"<<endl<<title<<endl;
	    cout<<"media price"<<endl<<price<<endl;
	}
};
int main()
{
	harddisk h();
	harddisk h1(4,"SSD",245000,"e-commerce web-site");
	h1.disp();
	
	pendrive p();
	pendrive p1(5,"sandisk ultra dual",2500,"e-commerce web-application");
	p1.disp1();
	
	return 0;
		}

