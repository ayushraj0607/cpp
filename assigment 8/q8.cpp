#include<iostream>
using namespace std;
class coordinate
{
private:
    int x,y;
public:
    void setdata()
    {
        int a,b;
        cout<<"enter two numbers: "<<endl;
        cin>>a>>b;
        x=a;y=b;
    }
    void showdata()
    {
        cout<<x<<" "<<y<<endl;
    }
    coordinate  operator,(coordinate);
};

coordinate coordinate::operator,(coordinate p)
{
    coordinate temp;
    temp.x=p.x;
    temp.y=p.y;
    return temp;
}
int main()
{
    coordinate c1,c2,c3;
    c1.setdata();
    c2.setdata();
    c1.showdata();
    c2.showdata();
    c3=(c1,c2);
    c3.showdata();
    return 0;
}
