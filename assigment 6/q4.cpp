#include<iostream>
using namespace std;
class book
{
    int bookid;
    string title;
    float price;
    public:
    book()
    {
        int h;string m;float s;
        cout<<"enter bookid title and price"<<endl;
        cin>>h>>m>>s;
        bookid=h;title=m;price=s;    
    }
    book(int x, string y,float z)
    {
        bookid=x;title=y;price=z; 
    }
    void display()
    {
        cout<<"book_id:- "<<bookid<<endl<<" title:- "<<endl<<title<<" price:- "<<price<<endl;
    }
};
int main()
{
    book obj;
    obj.display();


}