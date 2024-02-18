#include<iostream>
using namespace std;
class matrix
{
    private:
    int a[3][3];
    public:
    void set_matrix(int A[][3])
    {
    for(int i=0;i<=2;i++)
        for(int j=0;j<=2;j++)
            a[i][j]=A[i][j];
    }
    void print_matrix(int A[][3])
    {
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++)
            cout<<A[i][j]<<" ";
            cout<<endl;}
    }
    matrix add(matrix m)
    {
        matrix temp;
    for(int i=0;i<=2;i++)
        for(int j=0;j<=2;j++){
            temp.a[i][j]=a[i][j]+m.a[i][j];}
            return temp;
    }
    matrix add(matrix m)
    {
        matrix temp;
    for(int i=0;i<=2;i++)
        for(int j=0;j<=2;j++){
            temp.a[i][j]=a[i][j]-m.a[i][j];}
            return temp;
    }
    matrix multiply(matrix m)
    {
        matrix temp;
        int s,k;
    for(int i=0;i<=2;i++)
        for(int j=0;j<=2;j++)
        {
            for(k=0;k<2;k++)
            {
                s=s+a[i][k]+m.a[k][j];
            }
            temp.a[i][j]=s;
        }
          return temp;   
        }
        matrix multiply(matrix m)
    {
        matrix temp;
          for(int i=0;i<=2;i++)
            for(int j=0;j<=2;j++)
            {
                temp.a[i][j]=a[j][i];
            }
          return temp;   
        }
    bool singular()
    {
        int d;
        d=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
    }
};
int main()
{
    
}