#include<iostream>
using namespace std;
class circle
{
float radius,area;
    public:
int getdata()
{
cout<<"Enter radius:";
cin>>radius;
}

void putdata()
{
area=3.14*radius*radius;
cout<<"Area of circle="<<area;
}
};

int main()

{
circle c;

c.getdata();

c.putdata();
return 0;
}
