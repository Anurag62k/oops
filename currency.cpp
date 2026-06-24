#include<iostream>
using namespace std;

class Currency{

int rupee, paisa;

public:

void enter(){

cout<<"Enter rupee and paisa\n"; cin>>rupee>>paisa;}
Currency sum (Currency cu2)

{

Currency obj;

obj.paisa=paisa+cu2.paisa; 
obj.rupee=obj.paisa/100; 
obj.paisa=obj.paisa%100; 
obj.rupee=obj.rupee+rupee+cu2.rupee;

return obj;}

void sum (Currency cul, Currency cu2){

paisa=cul.paisa+cu2.paisa; rupee=paisa/100; paisa=paisa%100;

rupee=rupee+cul.rupee+cu2.rupee;}

void show()

{

cout<<rupee<<'.'<<paisa;
}
};

int main(){

Currency c1, c2, c3;  
c1.enter ();
 c2.enter();



cout<<"\nUsing function returning object\n";

c3=c1.sum(c2);

c3.show();

cout<<"\n\nUsing object as function argument"; c3.sum(c1,c2); c3.show();

return 0;
}
