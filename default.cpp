#include<iostream>
using namespace std;

void display(int a, int b)
{
    cout<<"Two numbers: "<<a<<" "<<b<<endl;
}

void display(int a)
{
    cout<<"One number: "<<a<<endl;
}

int main()
{
    display(10,20);  
    display(5);      

    return 0;
}