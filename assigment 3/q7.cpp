#include<iostream>
using namespace std;
int vol(int len, int bre, int hei);
float vol(int rad, int hei);
float vol(int rad);
int main()
{
	int l,b,h,r,m;
	float k;
	cout<<"enter length breadth and height"<<endl;
	cin>>l>>b>>h;
	m=vol(l,b,h);
	cout<<"volume of cuboid"<<m<<endl;
	
	cout<<"enter radius and height"<<endl;
	cin>>r>>h;
	k=vol(r,h);
	cout<<"volume of cone"<<k<<endl;
	
	cout<<"enter radius "<<endl;
	cin>>r;
	k=vol(r);
	cout<<"volume of sphere"<<k<<endl;
	
	
	return 0;
}
int vol(int len, int bre, int hei)
{
	int volume;
	volume=len*bre*hei;
	return volume;
}
float vol(int rad, int hei)
{
	float volume;
	volume=(1.0f/3.0f)*3.14*rad*rad*hei;
	return volume;
}
float vol(int rad)
{
	float volume;
	volume=(4.0f/3.0f)*3.14*rad*rad*rad;
	return volume;
}
