//Print Prime Factor
#include<iostream>
using namespace std;
void prime_factor(int x);
int main()
{
	int a;
	cout<<"enter any number";
	cin>>a;
	prime_factor(a);
	return 0;
}
void prime_factor(int x)
{
	int i,k;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			for(k=2;k<i;k++)
			{
				if(i%k==0)
				{
					break;
				}
				
			}
		}
		if(i==k)
		cout<<k<<endl;
	}
}
