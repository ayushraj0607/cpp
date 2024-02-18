#include<iostream>
using namespace std;
int add(int ,int , int=0);
int  main()
{
	int x,y,z,k;
	cout<<"enter two values"<<endl;;
	cin>>x>>y;
	k=add(x,y);
	cout<<k;
	cout<<"enter two values"<<endl;
	cin>>x>>y>>z;
	k=add(x,y,z);
	cout<<k;
	
	return 0;
}
int add(int a,int b, int c)
{
	int sum;
	sum=a+b+c;
	return sum;
}
