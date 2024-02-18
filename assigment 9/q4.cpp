#include<iostream>
using namespace std;
class distances
{
    int hr, min,sec;
    public:
    void setdata(int hr,int min,int sec)
    {
        this->hr=hr;
        this->min=min;
        this->sec=sec;  
    }
    void showdata()
    {
        cout<<"hour: "<<hr<<" min: "<<min<<" sec: "<<sec<<endl;
    }
    void sethour(int hr){this->hr=hr;}
    void setminutes(int min){this->min=min;}
    void setsecond(int sec){this->sec=sec;}
    int gethour(){return hr;}
    int getminutes(){return min;}
    int getsecond(){return sec;}
};
int main()
{
    distances obj;
    int a,b,c;
    obj.setdata(2,3,4);
    obj.showdata();
    obj.sethour(2);
    obj.setminutes(3);
    obj.setsecond(4);
    a=obj.gethour();
    b=obj.getminutes();
    c=obj.getsecond();
    cout<<a<<":"<<b<<":"<<c<<endl;
    return 0;

}