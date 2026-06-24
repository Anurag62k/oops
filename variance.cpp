#include<iostream>
#include<math.h>
using namespace std;
void print(int arr[],int n){
    cout<<"numbers are:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
float mean(int arr[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
         sum+=arr[i];
    }
     float avg=sum/n;
    cout<<"mean:"<<avg<<endl;
    return avg;
}
float variance(int arr[],float avg,int n){
float sum=0;
    for(int i=0;i<n;i++){
  sum+=pow(arr[i]-avg,2);
}
float var=sum/n;
cout<<"variance:"<<var<<endl;
return var;
}
float standard_deviation(int arr[],float var,int n){
float sd=sqrt(var);

cout<<"standard deviation:"<<sd;
return sd;}
int main(){
    int n,avg=0;
    cin>>n;
    int arr[n];
    print(arr,n);
   float res= mean(arr,n);
   float var=variance(arr,res,n);
   standard_deviation(arr,var,n);
}