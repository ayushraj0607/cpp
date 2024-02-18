#include<iostream>
using namespace std;
class COMPLEX
{
    private:
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
void f1()
{
    COMPLEX *cptr=new COMPLEX;
    cptr->setdata(2,3);
    cptr->showdata();
}
int main()
{
    f1();
    return 0;

    
}