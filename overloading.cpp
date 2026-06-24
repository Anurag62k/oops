#include<iostream>
using namespace std;
template<class c,class d>
class add{
    c a;
  d b;
    public:
    add(){};
    add(c x,d y){
        a=x;
        b=y;
    }
    add operator+(add e){
      add temp;
   temp.a=a+e.a;
    temp.b=b+e.b;
    return temp;
    }
    void showdata(){
        cout<<a<<" "<<b;
    }
};
int main(){
    add<int,float> c1(2,4.9),c2(3,8),c3;
    c3=c1+c2;
    c3.showdata();
}