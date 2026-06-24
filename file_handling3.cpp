#include<iostream>
#include<fstream>
using namespace std;
int main(){
    const int N=800;
    char line[N];

ifstream fin("item.txt");
cout<<"contents of file item.txt"<<"\n";
while(fin){
    fin.getline(line,N);
    cout<<line<<"\n";
}
fin.close();
fin.open("item2.txt");
cout<<"contents of file item2.txt"<<"\n";
while(fin){
    fin.getline(line,N);
    cout<<line<<"\n";
}
fin.close();
}