#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    int empid,salary;
    string name;
    public:
    void Input_employee_record()
    {
        int a,b; string c;
        cout<<"enter Employee ID: ";
        cin>>a;
        cout<<"enter Employee Name: ";
        cin>>c;
        cout<<"enter Employee Salary: ";
        cin>>b;
        empid=a;name=c;salary=b;
        cout<<endl;
    }
    void display_employee_record()
    {
        cout<<"Employee ID: "<<empid<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};


int main()
{
    
}