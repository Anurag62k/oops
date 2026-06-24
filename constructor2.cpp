#include<iostream>
using namespace std;
class Demo{
   private:
   string name;
   int weight;
   float height;
   int salary;
   public:
   Demo(){
    cout<<"constructor"<<endl;
    name="anurag";
    weight=56;
    height=5.6;
   cout<<name<<weight<<height<<endl;
}
Demo(string n,int s){
    name=n;
    salary=s;
    cout<<salary<<name;
}
Demo(const Demo&d){
 name=d.name;
 salary=d.salary;
 cout<<"copy constructor called"<<endl;
 cout<<"name"<<name<<"salary"<<salary<<endl;
}   
~Demo(){
 cout<<"destructor is called"<<endl;
}
};
int main(){
   Demo s1;
   Demo s2("umang ",50000);
    Demo s3=s2;//copy constructor
}