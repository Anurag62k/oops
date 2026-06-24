#include<iostream>
using namespace std;
class basic{
    public:
    int a;
    virtual void display(){//if this virtual keyword is removed then fn depend on pointer type but data depends on the object pointed to.
      cout<<"basic"<<a<<endl;//like ptr stores address of d so value of d.a is assigned to d without virtual fn.
      //if we use virtual fn+base class pointer+derived object then it will call derived class with value of d.a
    }
};
class derived:public basic{
    public:
void display(){
      cout<<"derived"<<a<<endl;
    }

};
int main(){
    basic b;
    derived d;
    basic*ptr;
    b.a=200;
    ptr=&b;
    ptr->a=100;
    (*ptr).a=400;
    cout<<b.a<<endl;
    b.display();
    d.a=100;//cant access the value of b.a in d.a , only variables and functions can be accessed not their values
    d.display();
    ptr=&d;
    ptr->display();
     b.display();
}