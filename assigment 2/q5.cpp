#include<iostream>
using namespace std;
int check_fibonacci(int a);
int main()
{
	int x,y,k;
	cout<<"enter any number";
	cin>>x;
	k=check_fibonacci(x);
	if(k==1)
	cout<<"yes";
	else
	cout<<"no";
	
}
int check_fibonacci(int p)
{
	int a=0,b=1,i,c;
	for(i=0;i<=p;i++)
	{
		c=a+b;
		a=b;b=c;
	if(c==p)
	return 1;
	}
	return 0;
}
