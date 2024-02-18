#include<iostream>
using namespace std;
int power_no(int a, int b);
int main()
{
	int x,y,k;
	cout<<"enter any number";
	cin>>x;
	cout<<"enter power";
	cin>>y;
	k=power_no(x,y);
	cout<<"maximaum no is: "<<k;
	return 0;
}
int power_no(int a, int b)
{
	int i,power=1;
	for(i=1;i<=b;i++)
	{
		power=power*a;
	}
	return power;
}
