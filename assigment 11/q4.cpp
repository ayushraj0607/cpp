#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    int empid,salary;
    char name[20];
    public:
    void Input_employee_record()
    {
        int a,b;
        cout<<"enter Employee ID: ";
        cin>>a;
        cout<<"enter Employee Name: ";
        cin.ignore();
        cin.getline(name,20);
        cout<<"enter Employee Salary: ";
        cin>>b;
        cout<<endl;
        empid=a;salary=b;
    }
    void display_employee_record()
    {
        cout<<"Employee ID: "<<empid<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl<<endl;
    }
    void store_employee_record()
    {
        ofstream dout;
        if (dout.is_open()) {
        dout.open("employee2.dat",ios::app|ios::binary);
        dout.write((char*)this,sizeof(*this));
        dout.close();
        }
        else {
            dout<< "Error opening the file for writing." << endl;
        }
    }
    void print_All_employee_record()
    {
        ifstream fin;
        fin.open("employee2.dat",ios::in|ios::binary);
        if(!fin)
        cout<<"file not found";
        else
        {
            fin.read((char*)this,sizeof(*this));
            while(!fin.eof())
            {
                display_employee_record();
                fin.read((char*)this,sizeof(*this));
            }
        }
        fin.close();
    }
};


int main()
{
    Employee obj;
  obj.Input_employee_record();
   obj.store_employee_record();
    obj.print_All_employee_record();
    return 0;
}