#include<iostream>
using namespace std;
class Class{
public:
string name;
int roll;
float gpa;
Class(string name,int roll,float gpa){
    this->name=name;
    this->roll=roll;
    this->gpa=gpa;
  
}
};
  void change(Class*c){
        c->gpa=8.9;
    }
int main(){
    Class c1("anurag",15,8.29);
    Class*p1=&c1;
    change(&c1);
cout<<c1.gpa;
}