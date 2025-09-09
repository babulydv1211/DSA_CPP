// #include<iostream>
// #include<vector>
// using namespace std;
//  void combinationSum(int arr[],int n,vector<int> v,int target){
//     if(target==0){
//         for(int i=0;i<v.size();i++){
//            cout<<v[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     if(target<0) return;
    
//     for(int i=0;i<n;i++){
//         v.push_back(arr[i]);
//         combinationSum(arr,n,v,target-arr[i]);
//         v.pop_back(); //backtracking 
//     }

// }

// int main(){
//     int arr[]={2,3,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int>v;
//     combinationSum(arr,n,v,8);
// }



//above code min repation aa jata h 

//now ab ek idnx bhi pass krna jo check kre jo ek number gya h vector min us aage call lge se a
#include<iostream>
#include<vector>
using namespace std;
 void combinationSum(int arr[],int n,vector<int> v,int target,int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
           cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;
    
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combinationSum(arr,n,v,target-arr[i],i);
        v.pop_back();
    }

}

int main(){
    int arr[]={2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    combinationSum(arr,n,v,8,0);
}