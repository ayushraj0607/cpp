#include<iostream>
using namespace std;
int hcf(int x, int y);
int main()
{
	int a,b,k;
	cout<<"enter two numbers";
	cin>>a>>b;
	k=hcf(a,b);
	cout<<k;
	return 0;
}
int hcf(int x, int y)
{
	int i;
	for(i=x>y?y:x;i>0;i--)
	{	
		if(x%i==0 && y%i==0)
		return i;
	}
}

