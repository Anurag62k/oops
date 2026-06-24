#include<iostream>
#include<list>
using namespace std;
int main(){
    list<string>tasks;
    tasks.push_back("hello");
    tasks.push_back("hii");
    tasks.push_front("bye");
    cout<<"tasks list"<<endl;
    for(auto t:tasks){
        cout<<t<<endl;
    }
    tasks.remove("hii");
    for(auto t:tasks){

    cout<<t<<endl;
    }
}