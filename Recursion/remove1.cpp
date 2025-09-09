// #include<iostream>
// using namespace std;

// int main(){
//   int a[]={1,2,1,3,1,1,4,5,1};
//   int b[4];
//    int j=0;
//   for(int i=0;i<9;i++){
//     if(a[i]!=1){
//         b[j]=a[i];
//         j++;
//     }
//   }
//   for(int i=0;i<4;i++){
//   cout<<b[i];
//   }
// }

//using recursion

#include<iostream>
#include<vector>
using namespace std;
void remove1(int n,int* a,int idx,vector<int>&v){
    if(idx==n){
       for(int i=0;i<v.size();i++){
        cout<<v[i];
       }
        return;
        
    }
    if(a[idx] != 1) v.push_back(a[idx]);
    remove1(n, a, idx+1, v);


}

int main(){
    int a[]={1,2,1,3,1,4,1,5};
     vector<int>v;
    remove1(8,a,0,v);
}
