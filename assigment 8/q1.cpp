#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setdata()
    {
        int x,y;
        cout<<"enter x and y value"<<endl;
        cin>>x>>y;
        a=x;b=y;
    }
    void showdata()
    {
        cout<<"a= "<<a<<" b="<<b;
    }
    friend complex operator+(complex,complex);
    friend complex operator-(complex,complex);
    friend complex operator*(complex,complex);
};
complex operator+(complex x,complex y)
{
    complex temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return temp;
}
complex operator-(complex x,complex y)
{
    complex temp;
    temp.a=x.a-y.a;
    temp.b=x.b-y.b;
    return temp;
}
complex operator*(complex x,complex y)
{
    complex temp;
    temp.a=(x.a*y.a)-(x.b*y.b);
    temp.b=(x.a*y.b)+(x.b)+(y.a);
    return temp;
}
int main()
{
    complex c1,c2,result;
    c1.setdata();
    c2.setdata();
    c1.showdata();
    c2.showdata();
    result=c1+c2;
    result.showdata();
    result=c1-c2;
    result.showdata();
    result=c1*c2;
    result.showdata();

    return 0;
}
