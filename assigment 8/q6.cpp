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
    friend complex operator-(complex);
};

complex operator-(complex x)
{
    complex temp;
    temp.a=-x.a;
    temp.b=-x.b;
    return temp;
}
int main()
{
    complex c1,result;
    c1.setdata();
    c1.showdata();
    result=-c1;
    result.showdata();

    return 0;
}
