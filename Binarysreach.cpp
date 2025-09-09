//Q.binary search element ,isme binary search min array sorted hona chaiye

// #include<iostream>
// using namespace std;
// int main(){
//     int n,st=0,end,flag=0,mid,num;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int arr[10];
//     cout<<"Enter the array element:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the search number:";
//     cin>>num;
//     end=n-1;
//     while(st<=end){
//       mid=(st+end)/2;
//       if(arr[mid]==num){
//         flag=1;
//         break;
//       }
//       else if(arr[mid]<num){
//          st=mid+1;
//       }
//       else {
//         end=mid-1;
//       }

//     }

//     if(flag==1){
//         cout<<"Number is found";
//     }
//     else{
//         cout<<"number is not found";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of array element:";
//     cin>>n;
//     int arr[10];
//     cout<<"Enter the array elemnet";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int l=0,h=n-1,x,flag=0,mid;
//     cout<<"Enter the target element is:";
//     cin>>x;
//     while(l<=h){
//          mid=(l+h)/2;
//         if(arr[mid]==x){
//              flag=1;
//              break;
//         }
       
//         else if(arr[mid]<x){
//             l=mid+1;
//         }
//         else{
//             h=mid-1;
//         }
//     }
//     if (flag==1){
//         cout<<"The target element present in this array at index: "<<mid+1;
//     }
//     else{
//         cout<<"elemnet is not presnet:";
//     }

// }


// lowe bound matlb
// [1,5,7,11,18,24,28 32] -> es array min 20 preset nhi h agar 20 rhta to wah 
   // uska actula positon kiya hota kis elemnet ke bd hota h wah elmenet return kro

//    #include<iostream>
//    #include<vector>
//    using namespace std;
//    int main(){
//     int n,x;
//     cout<<"Enter the number of element:";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter the vector element:";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
    
//     cout<<"Enter the target element:";
//     cin>>x;

//     int l=0;
//     int h=n-1;
//     bool flag;
//     while(l<=h){
//         int mid=(l+h)/2;
//         if(v[mid]==x) {
//             flag=true;
//             cout<<"The lower bound is:"<<v[mid-1];
//             break;
//         }
//         else if(v[mid]<x){
//             l=mid+1;
//         }
//         else {
//             h=mid-1;
//         }

//     }
//     if(flag==false) cout<<v[h];

//    }


// find uper bound 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of element:";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter the vector element:";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int x;
//     cout<<"Enter the target element";
//     cin>>x;

//     int l=0;
//     int h=n-1;
//     bool flag= false;
//     while(l<=h){
//         int mid=(l+h)/2;
//         if(v[mid]==x){
//             flag= true;
//             cout<<"The uper bound is"<<v[mid+1];
//             break;
//         }
//         else if(v[mid]<x){
//             l=mid+1;
//         }
//         else{
//             h=mid-1;
//         }
//     }
//     if(flag==false){
//         cout<<"The uper bound is"<<v[l];
//     }
// }


// Question given a sorted array of n element and a target x.find the 1st occurnce of 'x' in the array .if 'x' doesnot exist return -1

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the array element:";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter the vector element:";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int x;
//     bool flag = false;
//     cout<<"Enter the target element:";
//     cin>>x;
//     int l=0;
//     int h=n-1;
//     while(l<=h){
       
//      int mid=(l+h)/2;
//      if(v[mid]==x){
//         if(v[mid-1]!=x){
//             flag= true;
//             cout<<mid;
//             break;
//         }
//         else {
//             h=mid-1;
//         }

//      }
//      else if(v[mid]<x){
//         l=mid+1;
//      }
//   else{
//     h=mid-1;
//   }

//     }

// if(flag==false){
//     cout<<"-1";
// }
// }


//Question sorted array is given non-negative distinct intigers,find the smallest missing non-negative element
//arr={0,1,2,3,4,8,9,12} ->isme missing number h 5,6,7,10,11
//smallest missing number 5 output prient

#include<iostream>
using namespace std;

int main(){
    int arr[]={0,1,2,3,4,8,9,12};
    for(int i=0;i<8 ;i++){
        if(i!=arr[i]){
          cout<<"The smallest missing number is:"<<i;
          break;
        }
    }

}
