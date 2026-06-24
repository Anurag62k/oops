#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream outf("item.txt");
cout<<"enter item name";
string name;
cin>>name;
outf<<name<<"\n";

cout<<"enter item cost";
long long  cost;
cin>>cost;
outf<<cost<<"\n";
outf.close();
cout<<"data written to file successfully"<<"\n";
ifstream inf("item.txt");
//string name;
//string cost;
inf>>name;
inf>>cost;
cout<<"item name: "<<name<<"\n";
cout<<"item cost: "<<cost<<"\n";
}