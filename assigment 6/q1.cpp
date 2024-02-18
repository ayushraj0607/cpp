#include<iostream>
using namespace std;
class cuboid
{
    int len,bre,hei;
    public:
    cuboid(){}
    cuboid(int a,int b,int c)
    {
        len=a;bre=b;hei=c;
    }
    void get_data()
    {
        cout<<"length= "<<len<<"breadth= "<<bre<<"height= "<<hei<<endl;
    }
    int vol();
    int area();
};
int cuboid::vol()
{
    int volume;
    volume=len*bre*hei;
    return volume;
}
int cuboid::area()
{
    int ar;
    ar=2*(len*bre)+(bre*hei)+(hei*len);
    return ar;
}
int main()
{
    int a;
    cuboid obj(2,3,4);
    obj.get_data();
    a=obj.vol();
    cout<<a<<endl;
    a=obj.area();
    cout<<a;
    return 0;
}