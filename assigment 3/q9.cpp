#include<iostream>
using namespace std;
void swap_array(int ar1[], int size1 ,int ar2[], int size2);
int main()
{
    int i,arr1[5],arr2[5];
    cout<<"enter 1st array"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter 2nd array"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr2[i];
    }
    swap_array(arr1,5,arr2,5);
    return 0;
}
void swap_array(int ar1[], int size1 ,int ar2[], int size2)
{
    int i,c;
    for(i=0;i<5;i++)
    {
        c=ar1[i];
        ar1[i]=ar2[i];
        ar2[i]=c;
    }
    for(i=0;i<5;i++)
    {
    cout<<ar1[i]<<endl;
	}
	for(i=0;i<5;i++)
    {
    cout<<ar2[i]<<endl;
	}
}


