#include<iostream>
using namespace std;
int check_prime(int a);
int main()
{
	int x,k;
	cout<<"enter num: ";
	cin>>x;
	k=check_prime(x);
	if(k == 1)
	cout<<"prime";
	else
	cout<<"not prime";
	return 0;
}
int check_prime(int a)
{
	int i;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			break;
		}
	}
	if(a==i)
	{
		return 1;
	}
	else
		{
			return 0;
		}
	
}
