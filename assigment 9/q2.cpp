#include<iostream>
using namespace std;
class COMPLEX
{
    int a,b;
    public:
    void setdata(int a,int b)
    {
        this->a=a; 
        this->b=b;
    }
    void showdata()
    {
        cout<<a<<"+"<<b<<"i";
    }
};
int main()
{
    COMPLEX obj;
    obj.setdata(2,3);
    obj.showdata();

    
}