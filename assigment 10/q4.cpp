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
    void show_coordinate()
    {
        cout<<"("<<x<<","<<y<<")";
    }
};
class shape
{
    private:
    string shapename;
    public:
    void set_shapename(string set)
    {   shapename=set;  }
    string get_shapename()
    {   return shapename;    }
};
class straight_line:public shape
{
    Coordinate x,y;
    public:
    void set_line(Coordinate x,Coordinate y)
    {
        this->x=x;
        this->y=y;
    }
    float get_distance()
    {
        return x.getDistance(y);
    }
    void show_line()
    {
        x.show_coordinate();
        y.show_coordinate();
    }
};
int main()
{
    Coordinate obj1,obj2;
    obj1.set_coordinate(6,8);
    obj2.set_coordinate(5,7);
    straight_line obj;
    obj.set_line(obj1,obj2);
    float y=obj.get_distance();
    cout<<y<<endl;
    obj.show_line();
}