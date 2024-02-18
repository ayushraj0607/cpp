#include<iostream>
using namespace std;
class time
{
    int h,m,s;
    public:
    void setTime();    
    void showTime();    
    void normalize();
    time add(time);
    bool is_greater(time);
};
void time::setTime()
{
    int a,b,c;
    cout<<"enter hour minute and second"<<endl;
    cin>>a>>b>>c;
    h=a;m=b;s=c;
}
void time::showTime()
{
    cout<<h<<"hour"<<" "<<m<<"minute"<<" "<<s<<"second"<<endl;
}
void time::normalize()
{
    int p,q;
    if(s>60)
    {
        p=s/60;
        s=s%60;
        m=m+p;
    }
    if(m>60)
    {
        q=m/60;
        m=m%60;
        h=h+q;
    }      
    cout<<"Normalize"<<" hour"<<h<<" "<<" min"<<m<<" sec"<<s<<endl;
}
time time:: add(time b)
{
    time temp;
    temp.s=s+b.s;
    temp.m=m+b.m;
    temp.h=h+b.h;
    return temp;
}
bool time:: is_greater(time t)
{
    if(h>t.h)
    return true;
    else if (h<t.h)
    return false;
    else if (m>t.m)
    return true;
    else if (m<t.m)
    return false;
    else if (s>t.s)
    return true;
    else 
    return false;
    
}
int main()
{
    bool p;
    time obj,c,t;
    obj.setTime();
    c.setTime();
    obj.showTime();
    c.showTime();
    obj.normalize();
    c.normalize();
    t=obj.add(c);
    t.showTime();
    p=obj.is_greater(c);
    cout<<p;
    return 0;
}