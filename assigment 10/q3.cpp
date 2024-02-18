#include<iostream>
#include<math.h>
using namespace std;
class Coordinate
{
    private:
    int x,y;
    public:
    void set_coordinate(int x,int y)
    {
        cout<<"coordinates: ";
        this->x=x;
        this->y=y;
    }
    float getDistance()
    {
        return sqrt(x*x+y*y);
    }
    float getDistance(Coordinate a)
    {
        return sqrt((x-a.x)*(x-a.x)+(y-a.y)*(y-a.y));
    }
     
};
int main()
{
    Coordinate obj,obj1;
    float result;
    obj.set_coordinate(3,4);
    obj1.set_coordinate(2,3);
    result=obj.getDistance();
    cout<<result;
    cout<<endl;
    result=obj.getDistance(obj1);
    cout<<result;

}