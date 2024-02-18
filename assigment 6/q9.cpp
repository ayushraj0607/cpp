#include<iostream>
using namespace std;
class room
{
    int room_no; string room_type; bool isac; float price;
    public:
    room(int no, string type, bool yn,float pri ):room_no(no),room_type(type),isac(yn),price(pri)
    {
        
    }
    void display()
    {
        cout<<"room num "<<room_no<<endl;
        cout<<"room type "<<room_type<<endl;
        cout<<"Ac or not "<<isac<<endl;
        cout<<"price "<<price;
    }
};
int main()
{
    room obj(10,"luxury",0,123.2);
    obj.display();
}