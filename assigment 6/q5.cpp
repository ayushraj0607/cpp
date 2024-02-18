#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    complex(int r, int i)
    {
        real=r;img=i;
    }
    void show_data()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
void example()
{
    complex c[5]={complex(4,2),complex(6,8),complex(3,5),complex(1,9),complex(4,2)};
    for(int i=0;i<5;i++)
        c[i].show_data();
}
int main()
{
    example();
    return 0;
}