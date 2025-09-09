// #include<iostream>
// using namespace std;
//  int  main(){
//   int n,m,i,j,k;
//   cout<<"Enter the size of 1st array:";
//   cin>>n;

//   int arr[4];
//   cout<<"Enter the 1st array element:"<<endl;
//   for(int i=0;i<n;i++){
//      cin>>arr[i];
//   }
 
//   cout<<"Enter the size of 2nd array:";
//   cin>>m;
//  int brr[5];
//  cout<<"Enter the 2nd array element:"<<endl;
//  for(int j=0;j<m;j++){
//     cin>>brr[j];
//  }

//  int s=m+n;
//  int newarr[9];
 

//  i=0,j=0;k=0;

//  while(i<n && j<m){
//     if(arr[i]<brr[j]){
//         newarr[k]=arr[i];
//         k++;
//         i++;
//     }
//     else{
//         newarr[k]=brr[j];
//         k++;
//         j++;
//     }

//  }

//  while(i<n){
//     //means arr2 of pura itrate ho gya h
//     newarr[k]=arr[i];
//     k++;
//     i++;
//  }
//  while(j<m){
//     // it means arr1 is complete itrrate;
//     newarr[k]=brr[j];
//     k++;
//     j++;
//  }
       
//  cout<<"The marge array :"<<endl;
//  for(k=0;k<9;k++){
//     cout<<newarr[k]<<" ";
//  }

//  }



// Q. given a vector in increasing order if check its pair of sum is equal to given number then print yes
// target sum of pair is exist print yes;
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     vector<int>v(5);
//     cout<<"Enter the vector element:"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
//     int x;
//     cout<<"Enter the compare sum:";
//     cin>>x;

//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(v[i]+v[j]==x){
//              cout<<"Yes";
//              break;
//             }
            
//         }
//     }

// }



//Q. two pinter approch; if vector is increasing oeder the sum of two pair is equal to given x
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(8);
//     cout<<"Enter the vector element:"<<endl;
//     for(int i=0;i<8;i++){
//         cin>>v[i];
//     }
//   int x;
//   cout<<"Enter the target sum value :";
//   cin>>x;

//     int i=0;
//     int j=8-1;
//     bool found =false;
//     while(i<j){
//         if(v[i]+v[j]==x){
//             found=true;
//             break;
//         }
//         else if(v[i]+v[j]<x){
//             i++;
//         } 
//         else{
//             j--;
//         }
//     }

//     if(found==true) cout<<"Yes";
//     else cout<<"No";


// }

// Q. array are sorted in increasing order if there exist pair whose absolute differece is exactly x
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(5);
//     cout<<"Enter the vector element:"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
//     int i=0;
//     int j=5-1;
//     int x;
//     cout<<"Enter the absolute difference:";
//     cin>>x;
//     bool found=false;
//     while(i<j){
//         if(abs((v[j]-v[i])==x)){
//             found=true;
//             break;
//         }
//         else if(abs((v[j]-v[i]))>x){
//             j--;
//         }
//         else{
//             i--;
//         }
//     }
//  if(found == true) cout<<"Yes this pair are exist";
//     else cout<<"No any pair are exist";
// }

// above question of optimal solution
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(5);
//     cout<<"Enter the vector element:"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
//     int x;
//     cout<<"Enter the value x:";
//     cin>>x;
//     bool found=false;
//     int i=0,j=1;
//     while(i<5 && j<5){
//         if(v[j]-v[i]==x){
//             found=true;
//             break;
//         }
//         else if(v[j]-v[i]>x){
//             i++;
//         }  
//         else{
//             j++;
//         }
//     }

//     if(found==true) cout<<"Yes this pair of absolute difference are exist";
//     else cout<<"This pair are not exist";
// }



// Q. given a vector are sorted in increacing order.return an array of square of each number sorted in increasing order
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v(5);
//     cout<<"Enter the vector element:"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
// int i=0,j=4;
// int k=0;
//   vector<int>v1(5);
//  while(i<=j){
//     if( abs(v[i]) < abs(v[j])){
//         v1[k]=v[j]*v[j];
//         k++;
//         j--;
//     }
//     else{
//         v1[k]=v[i]*v[i];
//         k++;
//         i++;
//     }
//  }
//   reverse(v1.begin(),v1.end());
 
//  for(int i=0;i<5;i++){
//     cout<<v1[i]<<" ";
//  }

// }


//Q.given an array are in sorted in increasing order amd a intiger are given ,find the 
// unique pair that is exit whose absolute sum is excatly x

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(5);
//     cout<<"Enter the vector element:"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
//     int x;
//     cout<<"Enter the value of x:";
//     cin>>x; 
//    int i=0,j=4,count=0;
//    while(i<j){
//     if(v[i]+v[j]==x) {
//         cout<<count++;
//         i++;
//         j--;
//     }
//     else if(v[i]+v[j]>x){
//         j--;
//     }
//     else{
//         i++;
//     }
//    }

//    cout<<"The total unique pair is:"<<count;
// }




// ********************* revesion perpose ******
//to are inccreing order then merge inot then its increasing  order
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of 1st array:";
//     cin>>n;
//     int a[8];
//     cout<<"Enter the array elment:";
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int m;
//     cout<<"Enter the size of 2nd array:";
//     cin>>m;
//     int b[9];
//     cout<<"Enter the array element:";
//     for(int i=0;i<m;i++){
//         cin>>b[i];
//     }

//     int s=m+n;
//     int newarr[20];

//     int i=0,j=0,k=0;
//     while(i<n && j<m){
//         if(a[i]<b[j]){
//          newarr[k]=a[i];
//          k++;
//          i++;
//         }

//         else{
//             newarr[k]=b[j];
//             k++;
//             j++;
//         }

//      }

//         while(i<n){
//             newarr[k]=a[i];
//             i++;
//             k++;
//         }
//         while(j<m){
//             newarr[k]=b[j];
//             k++;
//             j++;
//         }

//         for(int k=0;k<s;k++){
//             cout<<newarr[k] <<" ";
//         }
    

// }


//**** target sum pair */

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     bool found= false;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     vector<int>v(5);
//     cout<<"Enter the vector element:";
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
//     int m;
//     cout<<"Enter the target sum :";
//     cin>>m;

//     int i=0,j=n-1;
//     while(i<j){
//         if(v[i]+v[j]==m){
//           found=true;
//           break;
//         }
//         else if(v[i]+v[j]<m){
//             i++;
//         }
//         else{
//            j--;
//         }
//     }

//     if(found=true){
//         cout<<"target sum pair are exit";
//     }
//     else{
//     cout<<"target sum pair are not exist";
//     }
// }


// array are given in increasing order then its square are increasing order

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int>v(6);
    cout<<"Enter the array elemet:";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0,j=n-1,k=0;
    vector<int>v1(6);
    while(i<=j){
      if(abs(v[i]) < abs(v[j])){
        v1[k]=v[j]*v[j];
        k++;
        j--;
      }
      else{
        v1[k]=v[i]*v[i];
        k++;
        i++;
      }

    }
  reverse(v1.begin(),v1.end());

  for(int i=0;i<n;i++){
    cout<<v1[i]<<" ";
  }

}
