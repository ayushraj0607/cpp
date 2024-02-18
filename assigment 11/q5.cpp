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
        empid=a; name=c; salary=b;
        cout<<endl;
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
        dout.open("employee1.dat",ios::app|ios::binary);
        dout.write((char*)this,sizeof(*this));
        dout.close();
    }
    void print_All_employee_record()
    {
        ifstream fin;
        fin.open("employee1.dat",ios::in|ios::binary);
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
     obj.display_employee_record();
   obj.store_employee_record();
    obj.print_All_employee_record();
    return 0;
}