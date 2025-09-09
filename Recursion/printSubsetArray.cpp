#include<iostream>
#include<vector>
using namespace std;
void  printSubsetArry(int arr[],int n,int idx,vector<int>v){ //yha & nhi legega har time new array create
  if(idx==n){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return ;
  }
    
    printSubsetArry(arr,n,idx+1,v);
    v.push_back(arr[idx]);
    printSubsetArry(arr,n,idx+1,v);
}

int main(){
    int arr[]={1,2,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    printSubsetArry(arr,n,0,v);
}