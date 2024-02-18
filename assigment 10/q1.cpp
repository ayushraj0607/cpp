#include<iostream>
using namespace std;
class person
{
private:
    string name; int age;
protected:
 void set_name()
    {
        string str;
        cout<<"enter name: ";
        cin>>str;
        cout<<endl;
        name=str;
    }
    void set_age()
    {
        int n;
        cout<<"enter age: ";
        cin>>n;
        cout<<endl;
        age=n;
    }
    void get_name()
    {
        cout<<"Name: "<<name<<endl;
    }
    void get_age()
    {
        cout<<"age: "<<age<<endl;
    }
public:
    
};

class employee:public person
{
    private:
    int salary;
    public:
    void set_employee()
    {
        long s;
        set_name();
        set_age();
        cout<<"enter salary: ";
        cin>>s;
        salary=s;
    }
    void get_employee()
    {
        get_name();
        get_age();
        cout<<"salary: "<<salary;  
    }
  
};

int main()
{
    employee obj;
    obj.set_employee();
    obj.get_employee();
    return 0;

}