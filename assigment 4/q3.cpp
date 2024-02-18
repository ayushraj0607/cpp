#include<iostream>
using namespace std;
class date
{
    int date, month,year;
    public:
        void get_value(int da,int mo,int yr)
        {    date=da;month=mo;year=yr; }
        void set_value()
        {
            cout<<"d= "<<date<<"  m= "<<month<<"  yr= "<<year<<endl;
        }
};
int main()
{
    date obj;
    obj.get_value(1,9,2023);
    obj.set_value();
    return 0;
}