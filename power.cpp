#include<iostream>
using namespace std;

int power(int m, int n = 2)
{
    int result = 1;

    for(int i = 0; i < n; i++)
    {
        result = result * m;
    }

    return result;
}

int main()
{
    int m,n;

    cout<<"Enter value of m and n: ";
    cin>>m>>n;

    cout<<"m^n = "<<power(m,n)<<endl;

    cout<<"Square of m (default n=2): "<<power(m)<<endl;

    return 0;
}