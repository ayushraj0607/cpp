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
    time normalize();
    time operator>(time z);
};
time time ::normalize()
{
    int p,q;
    if(sec>60)
    {
        sec=sec%60;
        p=sec/60;
        min=min+p;
    }
    if(min>60)
    {
        min=min%60;
        q=min/60;
        hr=hr+q;
    }
    return *this;
    //cout<<hr<<" hour "<<min<<" minute "<<sec<<" second"<<endl;
}
time time:: operator>(time z)
{
    if(hr>z.hr)
    cout<<"greater is "<<hr;
    else
    cout<<"greater is "<<z.hr<<"hour "<<z.min<<"minute "<<z.sec<<"second";   
}
int main()
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
    obj.normalize();
    obj1.normalize();
    obj.display();
    obj1.display();
    d=obj>obj1;
    return 0;



}