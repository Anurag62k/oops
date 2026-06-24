#include<iostream>
using namespace std;
class object{
public:
int x,y;
void getdata(){
    cout<<"enter real part of complex no"<<endl;
    cin>>x;
    cout<<"enter imaginary part of complex no"<<endl;
    cin>>y;
}
void show(){
    cout<<"complex no is:"<<x<<"+"<<y<<"i"<<endl;
}
object operator-(){
object t;
t.x=-x;
t.y=-y;
return t;

}
};
/*object operator +(object c){
  object t;
  t.x=x+c.x;
  t.y=y+c.y;
  return t;
}
  friend object operator+(object ,object);
};
object operator +(object c1,object c2){
  object t;
  t.x=c1.x+c2.x;
  t.y=c1.y+c2.y;
  return t;
}
int main(){
    object c1,c2,c3;
    c1.getdata();
    c1.show();
    c2.getdata();
    c2.show();
   c3=c1+c2;
c3.show();
}*/
int main(){
     object c1,c2;
    c1.getdata();
    c1.show();
     c2=-c1;
     (-c1).show();//c2.show();
}