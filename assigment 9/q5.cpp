#include<iostream>
using namespace std;
class time
{
    int hr, min,sec;
    public:
    void setdata(int hr,int min,int sec)
    {
        this->hr=hr;
        this->min=min;
        this->sec=sec;  
    }
    void showdata()
    {
        cout<<"hour: "<<hr<<" min: "<<min<<" sec: "<<sec<<endl;
    }
    
};
time* create_array(int size)
{
    return new time[size];
}

int main()
{
    
    return 0;
}