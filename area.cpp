#include<iostream>
using namespace std;

float area(float base, float height)
{
    return 0.5 * base * height;
}

float area(float radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    float b,h,r;

    cout<<"Enter base and height of triangle: ";
    cin>>b>>h;

    cout<<"Area of triangle = "<<area(b,h)<<endl;

    cout<<"Enter radius of circle: ";
    cin>>r;

    cout<<"Area of circle = "<<area(r)<<endl;

    return 0;
}