#include<iostream>
using namespace std;

void readMatrix(int a[10][10], int m = 3, int n = 3)
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

void displayMatrix(int a[10][10], int m = 3, int n = 3)
{
    cout<<"Matrix is:"<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int a[10][10];
    int n;

    cout<<"Enter number of columns: ";
    cin>>n;

    readMatrix(a,3,n);      
    displayMatrix(a,3,n);

    return 0;
}