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
    time operator+(time);
};
time time::operator+(time c)
{
    time temp;
    temp.hr=hr+c.hr;
    temp.min=min+c.min;
    temp.sec=sec+c.sec;
    return temp;
} main()
{
    int a,b,c;
    time d;
    cout<<"enter hour min and sec"<<endl;
    cin>>a>>b>>c;
    time obj(a,b,c);
    cout<<"enter hour min and sec"<<endl;
    cin>>a>>b>>c;
    time obj1(a,b,c);
    obj.display();
    obj1.display();
    d=obj+obj1;
    d.display();
    
    return 0;



}