#include<iostream>
using namespace std;

#define MAX(a,b,c) ((a>b && a>c)?a:(b>c?b:c))
int main()
{
    int x,y,z;

    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;

    cout<<"Largest number = "<<MAX(x,y,z);

    return 0;
}