#include<iostream>
using namespace std;
class distances
{
private:
    int km,m,cm;
    public:
    void set_data()
    {
        int x,y,z;
        cout<<"enter kilo meter: ";
        cin>>x;
        cout<<"enter meter: ";
        cin>>y;
        cout<<"enter centi meter: ";
        cin>>z;
        cout<<endl;
        km=x;m=y;cm=z;
    }
    void display()
    {
        cout<<"kilo meter: "<<km;
        cout<<"  meter: "<<m;
        cout<<"  centi meter: "<<cm<<endl;
    }
    distances normalize()
    {
        int p,q;
        p=cm/100;
        cm=cm%100;
        m=m+p;
        q=m/1000;
        m=m%1000;
        km=km+q;

    }   
    distances operator+(distances);
};

distances distances::operator+(distances c)
{
    distances temp;
    temp.km=km+c.km;
    temp.m=m+c.m;
    temp.cm=cm+c.cm;
    return temp;
}
int main()
{
    distances obj,obj1,p;
    obj.set_data();
    obj1.set_data();
    obj.display();
    obj1.display();
    obj.normalize();
    obj1.normalize();
    obj.display();
    obj1.display();
    p=obj+obj1;
    p.normalize();
    p.display();
    return 0;
}
