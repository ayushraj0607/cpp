#include<iostream>
using namespace std;
class complex
{
	int real,img; //instance member variable
	public:
		void set_value(int r,int i )  //instance member method 
		{	real=r;	img=i;	}
		int get_value()
		{	cout<<real<<"+"<<img<<"i"<<endl;	}	
};
int main()
{
	complex obj;
	obj.set_value(2,3);
	obj.get_value();
	return 0;
}
