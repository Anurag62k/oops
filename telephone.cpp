#include<iostream>
#include<fstream>
using namespace std;
class telephone{
    char name[70];
    long int num;
public:
void getdata(){
   cin>>name>>num;
}
void writedata(ofstream &fout){
    fout<<name<<" "<<num;
}
void show(){
    cout <<name <<"   "<<num;
}
void readdata(ifstream &fin){
    fin>>name>>num;
}
};
int main(){
telephone t;
ofstream fout("telephone.txt");
 for(int i=0;i<2;i++){
t.getdata();
t.writedata(fout);
 }
 fout.close();
ifstream fin("telephone.txt");
for(int i=0;i<2;i++){
    t.readdata(fin);
    t.show();

}
fin.close();
}