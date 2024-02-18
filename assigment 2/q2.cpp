#include<iostream>
using namespace std;
int highest_no(int a);
int main()
{
	int x,k;
	cout<<"enter any number";
	cin>>x;
	k=highest_no(x);
	cout<<"maximaum no is: "<<k;
	return 0;
}
int highest_no(int a)
{
	int max=0,b;
	while(a)
	{
		b=a%10;
		a=a/10;
		if(max<b)
		max=b;
	}
	return max;
}
