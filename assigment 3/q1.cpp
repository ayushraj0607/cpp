#include<iostream>
using namespace std;
void sort_array(int array[], int size,bool value);
int main()
{
	int i, arr[5];
	bool booleaninput;
	cout<<"enter any 5 values"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter boolean input"<<endl;
	cin>>booleaninput;
	
	sort_array(arr,5,booleaninput);
	return 0;
}
void sort_array(int array[], int size, bool value)
{
	int max,i,r,c;
	if(value==1)
	{
		for(i=0;i<size;i++)
		{
			for(r=0;r<size-1-i;r++)
			{
				if(array[r]>array[r+1])
				{
					c=array[r];
					array[r]=array[r+1];
					array[r+1]=c;
				}
			}
		}
		for(r=0;r<size;r++)
		{
			cout<<array[r]<<endl;
		}
	}
	else
	{
		for(i=0;i<=size-1;i++)
		{
			for(r=0;r<size-1-i;r++)
			{
				if(array[r]<array[r+1])
				{
					c=array[r];
					array[r]=array[r+1];
					array[r+1]=c;
				}
			}
		}
		for(r=0;r<size;r++)
		{
			cout<<array[r]<<endl;
		}
	}
}

