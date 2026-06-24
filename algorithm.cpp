#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>x;
    x={1,5,7,2,3};
    vector<int>y;
     y={9, 87,45,4,6,45,1};
     sort(x.begin(),x.end(),greater<int>());
     for(auto a:x){cout<<a<<" ";
    }
    cout<<endl;
    sort(y.begin(),y.end());
    for(auto b:y){
        cout<<b<<" ";
    }
    cout<<endl;
    int size=x.size()+y.size();
    int *z=new int[size];

    merge(x.begin(),x.end(),y.begin(),y.end(),z);
    for(int i=0;i<size;i++){
        cout<<z[i]<<" ";
    }
    delete[]z;
}