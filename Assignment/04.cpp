#include <iostream>
#include<conio.h>

using namespace std;

// Student Class Declaration
class StudentClass 
{
	private://Access - Specifier
   //Member Variable Declaration
	   char name[20];
	   int rollNo, sub1, sub2 ;
	   float total, avg;

	public://Access - Specifier
   //Member Functions read() and print() Declaration

   void read() {
      //Get Input Values For Object Variables
      cout << "Enter Name :";
      cin >> name;

      cout << "Enter Roll Number :";
      cin >> rollNo;

      cout << "Enter Marks for Subject 1 :" ;
      cin >> sub1  ;
      cout << "Enter Marks for Subject 2 :" ;
      cin >> sub2  ;
      
   }
   		void sum() {
      		total = sub1 + sub2 ;
      		avg = total / 2;
   }

   void print() {
      //Show the Output
      cout << "Name :" << name << endl;
      cout << "Roll Number :" << rollNo << endl;
      cout << "Subject 1 Marks :" << sub1 << " , " <<  endl;
      cout << "Subject 2 Marks :" << sub2 << " , " <<  endl;
      cout << "Total :" << total << endl;
      cout << "Average :" << avg << endl;
   }
};

int main() 
{
   // Object Creation For Class
   StudentClass stu1, stu2;

	   cout << "Read and Print Student Information ";
	
	   cout << "\nStudentClass : Student 1" << endl;
	   stu1.read();
	   stu1.sum();
	   stu1.print();
	
	   cout << "\nStudentClass : Student 2" << endl;
	   stu2.read();
	   stu2.sum();
	   stu2.print();
	   
	   cout << "\nStudentClass : Student 3" << endl;
	   stu2.read();
	   stu2.sum();
	   stu2.print();
	   
	   cout << "\nStudentClass : Student 4" << endl;
	   stu2.read();
	   stu2.sum();
	   stu2.print();
	
	   cout << "\nStudentClass : Student 5" << endl;
	   stu2.read();
	   stu2.sum();
	   stu2.print();
	   
	   cout << "\nStudentClass : Student 6" << endl;
	   stu2.read();
	   stu2.sum();
	   stu2.print();
	   
	   cout << "\nStudentClass : Student 7" << endl;
	   stu2.read();
	   stu2.sum();
	   stu2.print();
	   
	   cout << "\nStudentClass : Student 8" << endl;
	   stu2.read();
	   stu2.sum();
	   stu2.print();
	   
	   cout << "\nStudentClass : Student 9" << endl;
	   stu2.read();
	   stu2.sum();
	   stu2.print();
	   
	   cout << "\nStudentClass : Student 10" << endl;
	   stu2.read();
	   stu2.sum();
	   stu2.print();
   
   getch();
   return 0;
}
