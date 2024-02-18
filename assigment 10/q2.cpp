#include<iostream>
using namespace std;
class circle
{
private:
    int radius;
public:
 void set_radius(int r)
    {
        radius=r;
    }
    int get_radius()
    {
        return radius;
    }
    float get_area()
    {
        return 3.14*radius*radius;
    }
};
class thickCircle:public circle
{
    int thickness;
    public:
    void set_thickness(int thick)
    {
        thickness=thick;
    }
    int get_thickness()
    {
        return thickness;
    }
    double get_area()
    {
        float ar;
        ar=3.14*((get_radius()+thickness)*(get_radius()+thickness))-(3.14*get_radius()*get_radius());
        return ar;
    }
};
 
int main()
{
    circle obj;
    obj.set_radius(4);
    thickCircle obj1;
    obj1.set_thickness(7);
    double y=obj1.get_area();
    cout<<"area is : "<<y;
}
