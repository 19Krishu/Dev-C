#include<iostream>
using namespace std;
class first
{
    public : 
    string nm,mod;
};
class second:public first
{
    public:
    int no, year;
};
class third : public second
{
    public:
    void getdeta()
    {
        cout<<"Enter car no : "<<endl;
        cin>>no;
        cout<<"Enter car name : "<<endl;
        cin>>nm;
        cout<<"Enter model : "<<endl;
        cin>>mod;
        cout<<"Enter year : "<<endl;
        cin>>year;
    }
    void putdata()
    {
        cout<<"Car_no : "<<no<<endl<<"Car_name : "<<nm<<endl<<"Model : "<<mod<<endl<<"Year : "<<year<<endl;
    }
};
int main()
{
    third t;
    t.getdeta();
    t.putdata();
    return 0;
}