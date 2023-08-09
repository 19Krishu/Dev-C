//Marksheet program using multiple inheritance
#include<iostream>
using namespace std;
class mark
{
    public:
    int rno;
    string nm;
    int s1;
    int s2;
    int total;
    int avg;

    void insert()
    {
        cout<<"Enter roll_no : ";
        cin>>rno;
        cout<<"Enter name : ";
        cin>>nm;
        cout<<"Enter subject 1 marks : ";
        cin>>s1;
        cout<<"Enter subject 2 marks : ";
        cin>>s2;
    }
    void tot();
    void disp();
};
void mark::tot()
{
    total=s1+s2;
    avg=total/2;

}
void mark::disp()
{
	cout<<""<<endl;
    cout<<"  Roll number is : "<<rno<<endl;
    cout<<"  Name is : "<<nm<<endl;
    cout<<"  Subject mark is : "<<s1<<endl;
    cout<<"  Subject mark is : "<<s2<<endl;
    cout<<""<<endl;
    cout<<"Total is : "<<total<<endl;
    cout<<"Average : "<<avg<<endl;
    if (avg<40){
  cout<<"fail"<<endl;
 }
  else if (avg>=40 && avg>50) {
  cout<<"Third"<<endl;
}
else if (avg>=50 && avg<60) {
cout<<"Second"<<endl;
}
else if (avg>=60 && avg<70) {
cout<<"First"<<endl;
}
else if (avg>70) {
cout<<"Dist"<<endl;
}
 }
int main()
{
    mark m;
    m.insert();
    m.tot();
    m.disp();
    return 0;
}

