#include<iostream>
#include<fstream>
using namespace std;
int main(){
    float height[]={175.8,147,164.8,172.8};
    ofstream file;
    file.open("binary.txt",ios::binary);
    file.write((char*)&height,sizeof(height));
     file.close();
     for(int i=0;i<4;i++)
     height[i]=0;
     ifstream infile;
     infile.open("binary.txt",ios::binary);
     infile.read((char*)&height,sizeof(height));
      for(int i=0;i<4;i++){
        cout<<height[i]<<" ";
      }
      infile.close();
}