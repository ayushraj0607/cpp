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
        time operator=();
};

time time::operator=()
{
    time temp;
    temp.hr==hr;
    temp.min==min;
    temp.sec==sec;
    return temp;
}
int main()
{
     time i;
     cout<<"enter three values"<<endl;
     cin>>i;
     cout<<i;

     return 0;
}
