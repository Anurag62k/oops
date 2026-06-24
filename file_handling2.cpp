#include<iostream>
#include<fstream>
using namespace std;
int main(){
  //  ofstream outf("item.text");
  ofstream outf;
  outf.open("item.txt");
    cout<<"enter name";
     string name;
    cin>>name;
    outf<<name<<"\n";
    outf.close();
    ifstream inf("item2.txt");
    float cost;
    inf>>cost;
   cout<<cost;
   outf.close();
}
