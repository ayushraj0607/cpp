#include<iostream>
using namespace std;
class dates
{
    int date,month,year;
    public:
        void set_data()
        {
            int d,m,y;
            cout<<"enter date: ";
            cin>>d;
            date=d;
            cout<<endl<<"enter month: ";
            cin>>m;
            month=m;
            cout<<endl<<"enter year: ";
            cin>>y;
            year=y;
        }
        void get_data()
        {
            if(month==1)
            cout<<date<<" "<<"January"<<" "<<year;
            else if(month==2)
            cout<<date<<" "<<"feburary"<<" "<<year;
            else if(month==3)
            cout<<date<<" "<<"mrach"<<" "<<year;
            else if(month==4)
            cout<<date<<" "<<"april"<<" "<<year;
            else if(month==5)
            cout<<date<<" "<<"may"<<" "<<year;
            else if(month==6)
            cout<<date<<" "<<"June"<<" "<<year;
            else if(month==7)
            cout<<date<<" "<<"July"<<" "<<year;
            else if(month==8)
            cout<<date<<" "<<"august"<<" "<<year;
            else if(month==9)
            cout<<date<<" "<<"september"<<" "<<year;
            else if(month==10)
            cout<<date<<" "<<"october"<<" "<<year;
            else if(month==11)
            cout<<date<<" "<<"november"<<" "<<year;
            else
            cout<<date<<" "<<"december"<<" "<<year;
            
        }
};
int main()
{
    dates obj;
    obj.set_data();
    obj.get_data();
    return 0;
}