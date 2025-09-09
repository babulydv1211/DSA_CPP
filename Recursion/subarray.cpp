// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k];
//             }
//             cout<<endl;
//         }
//     }
// }


//using recursion

#include<iostream>
#include<vector>
using namespace std;
void printSubArray(int arr[],int n,int idx,vector<int>v){
  if(idx==n){
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout<<endl;
    return;
  }
  // phle subset jo print kr rha tha same logic now some change

    printSubArray(arr,n,idx+1,v);
    if(v.size()==0 || arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        printSubArray(arr,n,idx+1,v);
    }
  
}


int main(){
    int arr[]= {1,2,3,4};
    vector<int>v;
    int n=sizeof(arr)/sizeof(arr[0]);
    printSubArray(arr,n,0,v);
}