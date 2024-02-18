#include<iostream>
using namespace std;
class matrix
{
private:
    int a[3][3];
public:
    void set_data()
    {
        int i,j;
        cout<<"enter 9 emement of matrix"<<endl;
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                cin>>a[i][j];
                cout<<endl;
    }
    void showdata()
    {
        for(int i=0;i<=2;i++)
        {
        for(int j=0;j<=2;j++)
            {
                cout<<a[i][j]<<" ";
            }
        cout<<endl;
       }
       cout<<endl; 
    }
    matrix operator+(matrix);
    matrix operator-(matrix);
    matrix operator*(matrix);
};
matrix matrix::operator+(matrix p)
{
    matrix temp;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    temp.a[i][j]=a[i][j]+p.a[i][j];
    return temp;
}
matrix matrix::operator-(matrix p)
{
    matrix temp;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    temp.a[i][j]=a[i][j]-p.a[i][j];
    return temp;
}
matrix matrix::operator*(matrix p)
{
    matrix temp;
    int i,j,k,s;
    for(i=0;i<3;i++)
    {
           for(j=0;j<3;j++)
            {
                temp.a[i][j]=0;
                for(k=0;k<3;k++)
                temp.a[i][j]+=a[i][k]*p.a[k][j];
            }
            
    }
    return temp;
}
int main()
{
    matrix obj,obj1,z;
    obj.set_data();
    obj1.set_data();
    obj.showdata();
    obj1.showdata();
    cout<<"addition: "<<endl;
    z=obj+obj1;
    z.showdata();
    cout<<endl;
    cout<<"subtraction: "<<endl;
    z=obj-obj1;
    z.showdata();
    cout<<endl;
    cout<<"multiplication: "<<endl;
    z=obj*obj1;
    z.showdata();
    return 0;

}
