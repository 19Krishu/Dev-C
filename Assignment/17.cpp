#include<iostream>
using namespace std;
class student 
{
	protected:
    int rno, m1, m2,m3, m4 , m5 ,m6 ;
	public:

    void get() 
	{
        cout<< "Enter the Roll no :";
        cin>>rno;
        cout<< "Enter the six marks :"<<endl;
        cin >> m1>>m2>>m3>>m4>>m5>>m6;
    }
};

class sports 
{
	protected:
    int sm; // sm = Sports mark
	public:

    void getsm() {
        cout << "Enter the sports mark :";
        cin>>sm;
    }
};

class statement : public student, public sports {
    int tot, avg;
public:

    void display() 
	{
        tot = (m1 + m2  + m3 +m4 +m5 +m6 + sm);
        avg = tot / 7;
        cout << "\n\n\tRoll No    : " << rno << "\n\tTotal      : " << tot;
        cout << "\n\tAverage    : " << avg;
    }
};
int main() 
{
    statement obj;
    obj.get();
    obj.getsm();
    obj.display();
    return 0;
}
