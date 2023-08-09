#include<iostream>
using namespace std;
class m2
{
    public : 
    int min,sec;
    void get_m2()
    {
        cout<<"Enter Minute : ";
        cin>>min;
        cout<<"Enter Second : ";
        cin>>sec;
    }
};
class m1 : public m2
{
    public:
    float hour,h1,h2;
    void get_m1()
    {
        h2=sec/60;
        cout<<"Convert given second into minute : "<<h2<<endl;
        h1=min+h2;
        cout<<"Total minute : "<<h1<<endl;
        hour=h1/60;
        cout<<"Hour : "<<hour<<endl;
    }
};
int main()
{
    m1 m;
    m.get_m2();
    m.get_m1();
    return 0;
}