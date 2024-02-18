#include<iostream>
using namespace std;
float area(int radi);//circle rectangle triangle
int area(int len,int bred);
float area(float breadth, int height);
int main()
{
	int r,l,b,br,k;
	float y,h;
	cout<<"enter radius: "<<endl;
	cin>>r;
	y=area(r);
	cout<<"area of triangle: "<<y<<endl;
	
	
	cout<<"enter length and breadth: "<<endl;
	cin>>l>>b;
	k=area(l,b);
	cout<<"area of triangle: "<<k<<endl;
	
	
	cout<<"enter breadth and height: "<<endl;
	cin>>h>>br;
	y=area(h,br);
	cout<<"area of triangle: " <<y<<endl;
	
	
	return 0;
}

float area(int radi)
{
	float ar;
	ar=3.14*radi*radi;
	return ar;
}

int area(int len,int bred)
{
	int ar;
	ar=len*bred;
	return ar;
}

float area(float breadth, int height)
{
	float ar;
	ar=0.5*breadth*height;
	return ar;
}

