#include<iostream>
using namespace std;
class time
{
    int hr, min,sec;
    public:
    time()
    {
        int h, m, s;
        cout<<"enter time in hour minute and second"<<endl;
        cin>>h>>m>>s;
        hr=h;min=m;sec=s;    
    }
    void display()
    {
        cout<<hr<<" hour "<<min<<" min "<<sec<<" sec"<<endl;
    }
};
int main()
{
    time obj;
    obj.display();


}