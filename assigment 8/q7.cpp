#include<iostream>
using namespace std;
class integer
{
private:
    int x;
public:
    void setdata()
    {
        int p;
        cout<<"enter num: "<<endl;
        cin>>p;
        x=p;
    }
    void showdata()
    {cout<<x;}
    friend bool operator!(integer);
    friend bool operator==(integer, integer);
};
bool operator!(integer a)
{
    if(a.x!=0)
    return false;
    else 
    return true;
}
bool operator==(integer a, integer b)
{
    if(a.x==b.x)
    return true;
    else 
    return false;
}
int main()
{
    integer r,r1;
    bool result;
    r.setdata();
    r1.setdata();
    r.showdata();
    cout<<endl;
    result=!r;
    cout<<result<<endl;
    result=r==r1;
    cout<<result;

}
