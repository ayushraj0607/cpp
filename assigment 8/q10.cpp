#include<iostream>
using namespace std;
class student
{
private:
    int roll_no,age;
    string name;
public:
    void setdata()
    {
        int x,y;string s;
        cout<<"enter name: "<<endl;
        cin>>s;
        cout<<"enter roll no: "<<endl;
        cin>>x;
        cout<<"enter age: "<<endl;
        cin>>y;
        roll_no=x;age=y;name=s;
    }
    void showdata()
    {
        cout<<"Roll no: "<<roll_no<<" Name: "<<name<<" Age: "<<age;
    }
    bool operator==(student);
};
bool student::operator==(student x)
{
    if(name==x.name&&roll_no==x.roll_no&&age==x.age)
    return 1;
    return 0;
}

int main()
{
    student obj,obj1;
    bool result;
    obj.setdata();
    obj1.setdata();
    obj.showdata();
    obj1.showdata();
    result=obj==obj1;
    cout<<"Result: "<<result;
    return 0;

}
