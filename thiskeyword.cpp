#include<iostream>
using namespace std;
class Cricketer{
public:
string name;
int runs;
float avg;

Cricketer(string name,int runs,float avg){
  this-> name=name;
   this->runs=runs;
  this-> avg= avg;
}
void print(){
    cout<<this->name<<" " <<this->runs<<" "<<this->avg;/*here used this keyword because 
    if we pass some parameters in print like int runs then 
    it will print the parameter values instead of actual value like
     print(int runs) and c1.print(5) then it will print 5 but yes it does not change the actual 
    value if we print c1.runs out of print fn them it will give 25k.*/
}
};
int  main(){
    Cricketer c1("virat kohli",25000,58.5);
    c1.print();
}