#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    int count=0;
    string word;
    ifstream fin("item.txt");
  /* while(getline(fin,word))
    cout<<word;
    fin.clear();
    fin.seekg(0);*/
    while(fin>>word){
        cout <<word<<endl;
        count++;
    }
    fin.close();
    cout<<count;
}