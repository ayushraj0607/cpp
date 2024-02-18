#include<iostream>
using namespace std;
class circle
{
    int rad;
    public:
    circle()
    {   int r; 
        cout<<"eneter radius"<<endl;
        cin>>r;     
        rad=r;   }

    circle(int r)
    {   rad=r;   }
    
    void showdata()
    {   cout<<"radius"<<rad<<endl;  }
   
    void area()
    {   cout<<"area "<<3.14*rad*rad;    }

};
int main ()
{
    circle obj;
    obj.showdata();
    obj.area();
    circle obj1(4);
    obj1.showdata();
    obj1.area();
}