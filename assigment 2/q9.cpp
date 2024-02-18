#include<iostream>
using namespace std;
int max(int e,int f);
float max(float x, float y);
int main()
{
	int a,b,c;
	float p,q,r;
	cout<<"enter integer value: "<<endl;
	cin>>a>>b;
	c=max(a,b);
	cout<<"maximum is "<<c;
	
	cout<<"enter real value: "<<endl;
	cin>>p>>q;
	r=max(p,q);
	cout<<"maximum is "<<r;
	return 0;
}

int max(int e,int f)
{
	int maximum;
	if(e>f)
	maximum=e;
	else
	maximum=f;
	return maximum;
}

float max(float x, float y)
{
	float maximum;
	if(x>y)
	maximum= x;
	else 
	maximum= y;
	return maximum;
}

