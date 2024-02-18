//LCM of three number
#include<iostream>
using namespace std;
int lcm(int a, int b, int c);
int lcm2(int a, int b, int c);
int main()
{
	int k,x,y,z;
	cout<<"enter three num";
	cin>>x>>y>>z;
	k=lcm(x,y,z);
	cout<<"lcm is "<<k<<endl;
	k=lcm2(x,y,z);
	cout<<"lcm by 2nd trick: "<<k;
	return 0;
}
int lcm(int a, int b, int c)
{
	int i,max=0;
	if (a>b&&a>c)
	{
		max=a;
	}
	else if(b>a&&b>c)
	{
		max=b;
	}
	else
	{
		max=c;
	}
	for(i=max; ;i++)
	{
		if(i%a==0 && i%b==0 && i%c==0)
		return i;
	
	}
}
 int lcm2(int a, int b, int c)
 {
 	int i;
	for(i=a>b?a>c?a:c:b>c?b:c;i<a+b+c;i++)
	{
		if(i%a==0 && i%b==0 && i%c==0)
		return i;
	}
 }
