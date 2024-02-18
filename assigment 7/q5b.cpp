#include<iostream>
using namespace std;
class numbers
{
private:
    int x,y,z;
public:
    void setdata()
    {
        int a,b,c;
        cout<<"enter num"<<endl;
        cin>>a>>b>>c;
        x=a;y=b;z=c;
    }
    void display()
    {
        cout<<"x: "<<x<<endl<<"y: "<<y<<endl<<"z: "<<z<<endl;
    }
    numbers operator-();
};
numbers numbers::operator-()
{
    numbers temp;
    temp.x=-x;
    temp.y=-y;
    temp.z=-z;
    return temp;
}
int main()
{
    numbers obj,p;
    obj.setdata();
    obj.display();
    p=-obj;
    p.display();   

}
