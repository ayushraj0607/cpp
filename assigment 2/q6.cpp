#include<iostream>
using namespace std;
void swap(int &a,int &b);
int  main()
{
	int x,y;
	cout<<"enter two values";
	cin>>x>>y;
	swap(x,y);
	cout<<x<<y;
}
void swap(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	
}
