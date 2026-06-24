#include<iostream>
using namespace std;

class Vector
{
    float v[5];
    int size;

public:

    void create()
    {
        cout<<"Enter number of elements: ";
        cin>>size;

        cout<<"Enter vector elements:\n";
        for(int i=0;i<size;i++)
        {
            cin>>v[i];
        }
    }

    void modify()
    {
        int pos;
        float value;

        cout<<"Enter position to modify: ";
        cin>>pos;

        cout<<"Enter new value: ";
        cin>>value;

        if(pos>=0 && pos<size)
            v[pos] = value;
        else
            cout<<"Invalid position\n";
    }

    void multiply()
    {
        float scalar;

        cout<<"Enter scalar value: ";
        cin>>scalar;

        for(int i=0;i<size;i++)
        {
            v[i] = v[i] * scalar;
        }
    }

    void display()
    {
        cout<<"Vector = (";

        for(int i=0;i<size;i++)
        {
            cout<<v[i];

            if(i != size-1)
                cout<<", ";
        }

        cout<<")\n";
    }
};

int main()
{
    Vector v;

    v.create();
    v.display();

    v.modify();
    v.display();

    v.multiply();
    v.display();

    return 0;
}