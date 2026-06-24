#include<iostream>
using namespace std;

void readMatrix(int a[10][10], int m, int n)
{
    cout<<"Enter matrix elements:"<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
}

int main()
{
    int m,n;
    int a[10][10];

    cout<<"Enter number of rows: ";
    cin>>m;

    cout<<"Enter number of columns: ";
    cin>>n;

    readMatrix(a,m,n);

    return 0;
}