#include<iostream>
#include<map>
#include<set>
#include<stack>
#include<queue>
using namespace std;
int main(){
    map<int ,string>m;
    set <int> s={1,2,5,4,5,4};
    m[1]="one";
    m[2]="two";
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    for (auto x:s)
    cout<<x<<" ";
    map<string,int>n;
    n["apple"]++;
    n["banana"]++;
    n["apple"]++;

    cout<<"cart"<<endl;
    for(auto x:n){
        cout<<x.first<<": "<<x.second<<endl;
    }
  stack<int> a; 
   a.push(10);  
     a.push(70);
    cout << a.top()<<endl;
     
 queue<float>b;
 b.push(2.0);
 b.push(5.64);
 cout<<b.front()<<endl;
 priority_queue<int>c;
 c.push(54);
 c.push(85);
 cout<<c.top()<<endl;
 cout<<c.size();
}