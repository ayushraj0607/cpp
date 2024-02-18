#include<iostream>
using namespace std;
class customer
{
    int cus_id;
    string name,email,mobile;
    public:
    customer(int a,string b,string c,string d)
    {
           cus_id=a;name=b;email=c;mobile=d;
    }
    customer()
    {
        cus_id=0;
        name="ayush";
        email="vasn=@gmail.com";
        mobile="8651330214";
    }
    void display()
    {
        cout<<"customer id"<<cus_id<<endl<<"mobile"<<mobile<<endl<<"name"<<name<<endl<<"email"<<email<<endl;
    }
};
int main()
{
    customer obj(1,"ayush","imayusraj@gmail.com","8651330214");
    obj.display();
    customer obj1;
    obj1.display();
    return 0;
}