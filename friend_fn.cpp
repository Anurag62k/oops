#include<iostream>
using namespace std;
class student{
    private:
string name;
int roll;
string branch;
public:
void getvalue(){
    cout<<"enter name";
    cin>>name;
    cout<<"enter roll";
    cin>>roll;
    cout<<"enter branch";
    cin>>branch;

}
void putvalue(){
    cout<<"name"<<name;
    cout<<"roll"<<roll;
    cout<<"branch"<<branch;
}
friend void hello(student &);
};

void hello (student &s1){
s1.name='a';  
cout<<"name set by friend fn"<<endl;
} 

int main(){
student s;
s.getvalue();
hello(s);
s.putvalue();
 
}