#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
char str[80];
cout<<"enter string";
cin>>str;
int len=strlen(str);
fstream file;
file.open("item.txt",ios::in|ios::out);

for(int i=0;i<len;i++){
    file.put(str[i]);
}
file.seekg(0);
cout<<"\n contents of file \n";
char ch;
while(file.get(ch)){
    cout<<ch;
}
file.close();
return 0;
}