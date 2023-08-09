#include<iostream>
using namespace std;
int sum(int a,int b,int c,int result);
int main()
{
	int a;
	int b; 
	int c;
	int result;
	
		cout<<"A : ";
		cin>>a;
		cout<<"B : ";
		cin>>b;
		cout<<"C : ";
		cin>>c;
		result=a+b+c;
		cout<<"Result : "<<result;
	
} 
	int sum(int a,int b,int c,int result){
	return(a+b+c);
}
