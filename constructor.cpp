#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollno;
    float gpa;
    string branch;
    Student(string s,int r,float g,string b){
        name=s;
        rollno=r;
        gpa=g;
        branch=b;
    }
};
void print(Student c){
cout<<c.name<<" "<<c.gpa;
}
int main(){
    Student s1("anurag",15,8.29,"cse");
   /* s1.name="anurag";
    s1.rollno=15;
    s1.gpa=8.28;
    s1.branch="cse";

    Student s2;
  s2.name="umangf";

    s2.rollno=45;
    s2.gpa=8.29;
    s2.branch="cse";
cout<<s1.name<<" "<<s1.gpa;*/
print(s1);
}