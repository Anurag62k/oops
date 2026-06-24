#include<iostream>
using namespace std;

void input(string &name, int &units){
    cout<<"Enter user name: ";
    cin>>name;

    cout<<"Enter units consumed: ";
    cin>>units;
}

float calculateBill(int units){
    float amount;

    if(units <= 100)
        amount = units * 0.60;

    else if(units <= 300)
        amount = 100 * 0.60 + (units - 100) * 0.80;

    else
        amount = 100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90;

    if(amount < 50)
        amount = 50;

    if(amount > 300)
        amount = amount + amount * 0.15;

    return amount;
}

void display(string name, int units, float bill){
    cout<<"\nName: "<<name;
    cout<<"\nUnits Consumed: "<<units;
    cout<<"\nTotal Bill: "<<bill;
}

int main(){
    string name;
    int units;

    input(name,units);

    float bill = calculateBill(units);

    display(name,units,bill);
}