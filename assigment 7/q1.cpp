#include<iostream>
using namespace std;
class complex
{ 
    int real, img;
    public:
    complex(int r, int i):real(r),img(i)
    {    }
    complex()
    {

    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    complex operator+(complex x);
    complex operator-();
    complex operator*(complex x);
    bool operator==(complex x);
};
complex complex:: operator+(complex x)
{
    complex temp;
    temp.real=real+x.real;
    temp.img=img+x.img;
    return temp;
}
complex complex:: operator-()
{
    complex temp;
    temp.real=-real;
    temp.img=-img;
    return temp;
}
complex complex:: operator*(complex x)
{
    complex temp;
    temp.real=(real*x.real)-(img*x.img);
    temp.img=(real*x.img)+(img*x.real);
    return temp;
}
bool complex:: operator==(complex x)
{
    bool temp;
    if(real==x.real && img==x.img)
    return true;
    return false;
}
int main()
{
    int x,y;
    complex sum;
    complex sub;
    complex multiply;
    bool b;
    cout<<"enter real and imaginary"<<endl;
    cin>>x>>y;
    complex obj(x,y);
    cout<<"enter real and imaginary"<<endl;
    cin>>x>>y;
    complex obj1(x,y);
    obj.display();
    obj1.display();
    //sum=obj+obj1;
    sum=obj.operator+(obj1);
    sum.display();
    cout<<endl;
    sub=-obj1;
    sub.display();
    cout<<endl;
    multiply=obj*obj1;
    multiply.display();
    cout<<endl;
    b=obj==obj1;
    cout<<b;
    return 0;
}