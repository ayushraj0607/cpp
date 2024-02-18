#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter two values"<<endl;
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"after swap "<<a<<b;
	return 0;
}
