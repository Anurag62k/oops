#include<iostream>
using namespace std;
class health{
    public:
    virtual void treat()=0;
    void patient(){
    cout<<"general patient";
    }
};
class covid:public health{
    void treat(){
        cout<<"isolation+oxyegen"<<endl;
    }
};
class emergency:public health{
    void treat(){
        cout<<"icu";
    }
};
int main(){
    health *ptr;
    covid c;
    ptr=&c;
    ptr->treat();
    emergency e;
    ptr=&e;
    ptr->treat();
}