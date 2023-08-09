#include <iostream>
using namespace std;

int main() 
{                                                                   
 int n;
 float p, r, I;
 cout<<"\n Enter Amount p : "<<endl;
   cin>>p;
 cout<<"\n Enter Rate r : "<<endl;
   cin>>r;  
 cout<<"\n Enter No of Years n : "<<endl;       
   cin>>n;
 I = (p*r*n)/100;
 printf("\n Interest = %.2f",I);

 return 0;
}
