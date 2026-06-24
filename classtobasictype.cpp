#include<iostream>
using namespace std;
class complex{
int a,b;
public:
void set(int x,float y){
    a=x; b=y;
}
void display(){
    cout<<a<<b;
}
  operator int(){
    return b;
  }
  complex(){

  }
  complex(int c,int k)
  {
    a=c;
    b=k;
  }
};
class comp{
 int d,e;
 public:
 comp(){

 }
 comp (complex c,complex f){
    d=c*524; e=f*987;
 }
 void displa(){
    cout<<d <<"   " <<e;
 }
};
int main(){
    complex c1;
    c1.set(2,5.8);
    int z;
    z=c1;//class to basic type
   
    c1.display();
    cout<<z;
     int v=8,k=9;
    c1=complex(v,k);//basic to class type
    c1.display();
    comp h1(c1,c1);//object to object typecast

    h1.displa();
}