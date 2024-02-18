#include<iostream>
using namespace std;
class time
{
    int hr, min, sec;
    public:
    time(int x, int y, int z):hr(x),min(y),sec(z)
    {}
    time()
    {}
    void display()
    {
        cout<<hr<<" hour "<<min<<" minute "<<sec<<" second"<<endl;
    }
    time operator++();
    time operator++(int);
};
time time:: operator++()
{
     sec++;
     min=min+sec/60;
     sec=sec%60;
     hr=hr+min/60;
     min=min%60;
     return *this;
}
time time:: operator++(int)
{
     time temp=*this; 
     sec++;
     min=min+sec/60;
     sec=sec/60;
     hr=hr+min/60;
     min=min%60;
     return temp;
}


int main()
{
    int a,b,c;
    time d;
    cout<<"enter hour min and sec"<<endl;
    cin>>a>>b>>c;
    time obj(a,b,c);
    obj.display();
    d=++obj;
    d.display();
    d=obj++;
    d.display();
    return 0;



}