#include<iostream>
using namespace std;
int add(int e,int f);
float add(float x, float y);
int main()
{
	int a,b,c;
	float p,q,r;
	cout<<"enter integer value: "<<endl;
	cin>>a>>b;
	c=add(a,b);
	cout<<"sum is "<<c;
	
	cout<<"enter real value: "<<endl;
	cin>>p>>q;
	r=add(p,q);
	cout<<"sum is "<<r;
	return 0;
}

int add(int e,int f)
{
	int sum;
	sum=e+f;
	return sum;
}

float add(float x, float y)
{
	float sum;
	sum=x+y;
	return sum;
}

