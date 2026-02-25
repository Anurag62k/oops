#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollno;
    float gpa;
    string branch;
};
int main(){
    Student s1;
    s1.name="anurag";
    s1.rollno=15;
    s1.gpa=8.28;
    s1.branch="cse";

    Student s2;
  s2.name="umangf";

    s2.rollno=45;
    s2.gpa=8.29;
    s2.branch="cse";
cout<<s1.name<<" "<<s1.gpa;
}