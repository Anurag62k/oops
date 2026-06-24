#include<iostream>
using namespace std;

double power(double m, int n = 2)
{
    double result = 1;

    for(int i = 0; i < n; i++)
    {
        result = result * m;
    }

    return result;
}

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
    int a = 5;
    double b = 2.5;

    cout<<"Power of integer: "<<power(a,3)<<endl;

    cout<<"Power of double: "<<power(b,3)<<endl;

    cout<<"Square of integer (default n=2): "<<power(a)<<endl;

    cout<<"Square of double (default n=2): "<<power(b)<<endl;

    return 0;
}