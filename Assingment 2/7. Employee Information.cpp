#include<iostream>
using namespace std;
class Employee
{
	private:
		string Name;
		string Id_no;
		string Department;
		string Position;
		int Year; 
	public:
		string Employee(string Name , string Id_no , string Department , string Position , int Year)
		{
			Name = Name;
            Id_no = Id_no;
            Department = Department;
            Position = Position;
            Year = Year;
		}
		void setName(string Name)
		{
			Name = Name;
		}
		void setId_no(string Id_no)
		{
			Id_no = Id_no;
		}
		void setDepartment(string Department)
		{
			Department = Department;
		}
		void setPosition(string Position)
		{
			Position = Position;
		}
		
	string const getName()
    {
        return Name;
    }
    string const getId_no()
    {
        return Id_no;
    }
    string const getDepartment()
    {
        return Department;
    }
    string const getPosition()
    {
        return Position;
    }
    int const getYear()
    {
        return Year;
    }
};
int main()
{
	cout<<"Employee 1 : Neel, 240799, Animation, Manager, 2"<<endl;
	cout<<"Employee 2 : Dev ,280904, Chemical Science , Worker, 3"<<endl;
	cout<<"Employee 3 : Anish ,230304 , Mobile Application , Senior Manager ,5"<<endl;
	return 0;
}
