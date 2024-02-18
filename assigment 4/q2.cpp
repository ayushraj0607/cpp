#include<iostream>
using namespace std;
class time
{
    int hour,min,sec;
    public:
        void get_value(int hr,int mi,int sc)
        {    hour=hr;min=mi;sec=sc; }
        void set_value()
        {
            cout<<hour<<" hr"<<min<<" min"<<sec<<" sec"<<endl;
        }
};
int main()
{
    time obj;
    obj.get_value(2,30,45);
    obj.set_value();
    return 0;
}