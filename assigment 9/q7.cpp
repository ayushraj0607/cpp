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

void printarray(time t[], int size)
{
    for(int i=0;i<size;i++)
    t[i].showdata();
}
int main()
{
    cout << "Enter values for time :" << endl;
    time* p = create_array(4);
    for (int i = 0; i < 4; i++)
    {
        int hr, min, sec;
        cin >> hr>>min>>sec;
        p[i].setdata(hr, min, sec);
    }
    cout << "Time array:" << endl;
    printarray(p, 4);
    return 0;
}