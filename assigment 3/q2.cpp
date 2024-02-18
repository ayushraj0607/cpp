#include<iostream>
using namespace std;
void sort_string(char str[], int size, bool value);
int main()
{
	char string[5];
	int i;
	bool input;
	cout<<"enter any string"<<endl;
	cin.getline(string,6);

	cout<<"enter boolean value"<<endl;
	cin>>input;
	sort_string(string,5,input);
	return 0;	
}
void sort_string(char str[], int size, bool value)
{
	int i,r;
	char c;
	if(value==1)
	{
		for(i=1;i<size;i++)
		{
			for(r=0;r<size-1-r;r++)
			{
				if(str[r]>str[r+1])
				{
					c=str[r];
					str[r]=str[r+1];
					str[r+1]=c;
				}
			}
		}
		cout<<str;	
	}
	else
	{
		for(i=1;i<size;i++)
		{
			for(r=0;r<=size-1-r;r++)
			{
				if(str[r]<str[r+1])
				{
					c=str[r];
					str[r]=str[r+1];
					str[r+1]=c;
				}
			}
		}
		cout<<str;
	}
}

