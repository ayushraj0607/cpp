#include<iostream>
using namespace std;
class student
{
    int roll;
    string name;
    char s;
    public:
    student()
    {
        int a;string b;char c;
        cout<<"Enter roll name and section"<<endl;
        cin>>a>>b>>c;
        roll=a; name=b; s=c;
    }
    void display()
    {
        cout<<"Roll num"<<roll<<endl<<"Name"<<name<<endl<<"section"<<s;
    }


};
int main()
{
    student obj;
    obj.display();
    return 0;
}