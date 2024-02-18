#include<iostream>
using namespace std;
class date
{
    int d,m,y;
    public:
    date(int a, int b, int c):d(a),m(b),y(c)
    {}
    void show_data()
    {
        cout<<d<<"day "<<m<<"month "<<y<<"year";
    }
};
int main()
{
    date obj(12,12,2012);
    obj.show_data();
    return 0;
}