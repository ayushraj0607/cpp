#include<iostream>
using namespace std;
class complex
{
    int a,b;    //instance member variable
    public:
    void set_data();
    void showdata();
    complex add(complex,complex);
    complex subtract(complex,complex);
    complex multiply(complex,complex);
};
void complex::set_data()
{   
    int x,y;
    cout<<"enter real and imaginary number"<<endl;
    cin>>x>>y;
    a=x;b=y;
}
void complex::showdata()
{
    cout<<a<<"+"<<b<<"i"<<endl;
}
complex complex::add(complex c1,complex c2)
{
    complex temp;
    temp.a=c1.a+c2.a;
    temp.b=c1.b+c2.b;
    return temp;
}
complex complex::subtract(complex c1,complex c2)
{
    complex temp;
    temp.a=c1.a-c2.a;
    temp.b=c1.b-c2.b;
    return temp;
}
complex complex::multiply(complex c1,complex c2)
{
    complex temp;
    temp.a=(c1.a*c2.a)-(c1.b*c2.b);
    temp.b=(c1.a*c2.b)+(c1.b*c2.a);
    return temp;
}
int main()
{
    complex a1,a2,a3,a4;
    a1.set_data();
    a2.set_data();
    a1.showdata();
    a2.showdata();
    a4=a3.add(a1,a2);
    a4.showdata();
    a4=a3.subtract(a1,a2);
    a4.showdata();
    a4=a3.multiply(a1,a2);
    a4.showdata();
    return 0;
}