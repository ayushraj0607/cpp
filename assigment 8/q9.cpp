#include<iostream>
using namespace std;
class coordinate
{
private:
    int x,y;
public:
    coordinate  operator,(coordinate);
    friend istream &operator>>(istream &, coordinate &);
    friend ostream &operator<<(ostream &, coordinate );
};
istream &operator>>(istream &din, coordinate &x)
{
    din>>x.x>>x.y;
    return din;

}
ostream &operator<<(ostream &dout, coordinate y)
{
    dout<<y.x<<y.y;
    return dout;

}

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
    cout<<"Enter two no: "<<endl;
    cin>>c1;
    cout<<c1;
    cout<<"Enter two no: "<<endl;
    cin>>c2;
    cout<<c2;
    cout<<" gy";
    c3=(c1,c2);
    cout<<c3;
    return 0;
}
