#include<iostream>
using namespace std;
class time
{
private:
    int hr,min,sec;
public:
    time(int h, int m,int s):hr(h),min(m),sec(s)
    {}
    time()
    {}
    void showdata()
    {cout<<"hour: "<<hr<<" min: "<<min<<" sec: "<<sec<<endl;    }
    friend istream& operator>>(istream&, time &);
    friend ostream& operator<<(ostream&, time );

};
istream &operator>>(istream &din, time &i)
{
    din>>i.hr>>i.min>>i.sec;
    return din;
}
ostream &operator<<(ostream &dout,time i)
{
    dout<<"hr= "<<i.hr<<" min= "<<i.min<<" sec: "<<i.sec;
    return dout;
}

int main()
{
     time i;
     cout<<"enter three values"<<endl;
     cin>>i;
     cout<<i;
     return 0;
}
