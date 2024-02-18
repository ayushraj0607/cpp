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
    distances operator++();
    distances operator++(int);
};
distances distances:: operator++()
{
     cm++;
     m=m+cm/100;
     cm=cm%100;
     km=km+m/1000;
     km=km%1000;
     return *this;
}
distances distances:: operator++(int)
{
     distances temp=*this; 
     cm++;
     m=m+cm/100;
     cm=cm%100;
     km=km+m/1000;
     km=km%1000;
     return temp;
}
int main()
{
    distances obj,a;
    obj.set_data();
    obj.display();
    obj.normalize();
    a=obj++;
    a.display();
    a=++obj;
    a.display();
    return 0;
}
