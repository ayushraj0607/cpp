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
    bool operator>(time t)
    {
        if(hr>t.hr)
        return false;
        else if(hr<t.hr)
        return true;
        else if(min>t.min)
        return false;
        else if(min<t.min)
        return true;
        else if (sec>t.sec)
        return false;
        else 
        return true;        
    }
};
time* create_array(int size)
{
    return new time[size];
}
void sort(time t[], int size)
{
    int i,r;
    time temp;
    for(r=1;r<=size;r++)
    {
        for(i=0;i<=size-1-r;i++)
        {
            if(t[i+1]>t[i])
            {
                temp=t[i];
                t[i]=t[i+1];
                t[i+1]=temp;
            }
        }
    }
}
int main()
{
    
    return 0;
}