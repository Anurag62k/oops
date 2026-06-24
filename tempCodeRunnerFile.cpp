#include<iostream>
using namespace std;
class basic{
  public:
  int a;
  virtual void display()=0;  
   void show(){
        cout << "Derived " << a << endl;

   }
};
class derived:public basic{
public:
 /* void display(){
        cout << "Derived " << a << endl;
    }*/
   void show(){
        cout << "Derived " << a << endl;

   }
};

int main(){
    basic* ptr;
    derived d;

    d.a = 200;

    ptr = &d;

    ptr->show();
}