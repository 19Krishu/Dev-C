#include<iostream>
#include<string>
using namespace std;
class Student
{ 
    int no;
    string stu_name;
    string clg_name;
   
    public: student()
    { 
        cout<<endl<<"Welcome to the Student Information System";
        cout<<endl<<"*****************************************";
    }
    void getdata()
    { 
        cout<<endl<<"Enter student number:";
        cin>>no;
        cout<<endl<<"Enter student name:";
        cin>>stu_name;
        cout<<endl<<"Enter College name:";
        cin>>clg_name;
        
    }
    void putdata()
    { 
        cout<<endl<<"The student number:"<<no;
        cout<<endl<<"The student name:"<<stu_name;
        cout<<endl<<"The student address:"<<clg_name;
       
    }
};
class marks: public Student
{ 
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    int sub6;
    int tot;
    int per;
    public:
        void input()
        { 
            getdata();
            cout<<endl<<"Enter the marks1:";
            cin>>sub1;
            cout<<endl<<"Enter the marks2:";
            cin>>sub2;
            cout<<endl<<"Enter the marks3:";
            cin>>sub3;
            cout<<endl<<"Enter the marks4:";
            cin>>sub4;
            cout<<endl<<"Enter the marks5:";
            cin>>sub5;
            cout<<endl<<"Enter the marks6:";
            cin>>sub6;
        }
    void output()
    { 
        cout<<endl<<"Student Details:";
        cout<<endl<<"****************";
        putdata();
        cout<<endl<<"Marks1:"<<sub1;
        cout<<endl<<"Marks2:"<<sub2;
        cout<<endl<<"Marks3:"<<sub3;
        cout<<endl<<"Marks4:"<<sub4;
        cout<<endl<<"Marks5:"<<sub5;
        cout<<endl<<"Marks6:"<<sub6;
    }
    void calculate()
    { 
        tot=sub1+sub2+sub3+sub4+sub5+sub6;
        per=tot/6*100;
        cout<<endl<<"Total percentage:"<<per;
        if(per>=85)
        cout<<endl<<"Grade A+";
        else if(per>=60)
        cout<<endl<<"Grade A";
        else if(per>=50)
        cout<<endl<<"Grade B";
        else
        cout<<endl<<"Grade C";
    }
};

int main()
{ 
marks m1;
m1.input();
m1.output();
m1.calculate();
return 0;
}
