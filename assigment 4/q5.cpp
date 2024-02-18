#include<iostream>
using namespace std;
class circle
{
    int rad;
    public:
    void set_radius()
    {
        int r;
        cout<<"enter radius"<<endl;
        cin>>r; rad=r;
    }
    int getradius()
    {   return rad; }
    float area()
    {  return 3.14*rad*rad;   }
    float circumference()
    {   return 2*3.14*rad;  }
};
int main()
{
    circle c;
    c.set_radius();
    c.getradius();
    cout<<"area is"<<c.area()<<endl;
    cout<<"circumference is"<<c.circumference();
}