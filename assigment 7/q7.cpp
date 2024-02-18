#include<iostream>
using namespace std;
class fraction
{
private:
    long num,deno;
public:
    fraction(long x, long y):num(x),deno(y)
    {    }
    fraction()
    {}
    void display()
    {
        cout<<"numerator: "<<num;
        cout<<"  denominator:  "<<deno;
    }
    bool operator<(fraction);
    protected:
    long lcm(int x, int y)
    {
        int l;
        for(x>y?x:y;l<=x*y;l++)
        if(l%x==0 && l%y==0)
        return l;
    }
};
bool fraction::operator<(fraction c)
{
    //fraction temp;
    long l=lcm(deno,c.deno);
    num=num*(l/deno);
    c.num=c.num*(l/c.deno);
    if(num<c.num)
    return 1;
    else
    return 0;
}
int main()
{
    int a,b;
    cout<<"enter numerator and denominator: ";
    cin>>a>>b;
    fraction obj(a,b);
    cout<<"enter numerator and denominator: ";
    cin>>a>>b;
    fraction obj1(a,b);
    bool p;
    p=obj<obj1;
    cout<<p;
    
  //  p.display();
    
    

}
