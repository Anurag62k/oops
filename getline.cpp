#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    const int m=800;
    char name[m];
    ofstream fout("hello.txt");
     cin.getline(name,m);
     fout<<name<<" ";
     fout.close();
     ifstream fin("hello.txt");
     while(fin){
     fin.getline(name,m);
     cout<<name<<" ";
     }
     fin.close();
}