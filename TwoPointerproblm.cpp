//Q. sort an array consistiong of only 0 and 1

// #include<iostream>
// #include<vector>
// using namespace std;
//  int  main(){
//     vector<int>v(8);
//     int count=0;
//     cout<<"Enter the vector element"<<endl;
//     for(int i=0;i<8;i++){
//         cin>>v[i];
//     }

//     for(int i=0;i<8;i++){
//         if(v[i]==0){
//             count++;
//         }
//     }

//     for(int i=0;i<8;i++){
//         if(i < count){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//         }
//     }

//     for(int i=0;i<8;i++){
//         cout<<v[i];
//     }

//  }


 // 2nd method 2 pointer approch
//  #include<iostream>
//  #include<vector>
//  using namespace std;
//   int main(){
//     vector<int> v(5);
//     cout<<"Enter the vector element:"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
//   int start=0;
//   int end=4;

//   while(start<end){
//      if(v[start]==1 && v[end]==0){
//          v[start]=0;
//          v[end]=1;
//          start++;
//          end--;
//      }
//     if(v[start]==0 ){
//        start++;
//     }
//     if(v[end]==1){
//         end--;
//     }
//   }  

//   for(int i=0;i<5;i++){
//     cout<<v[i];
//   }

//   }


// q. intiger arry main even number ko  left ur odd number ko right min place krna
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of vector:"<<endl;
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter the vector element:"<<endl;
//     for(int i=0;i<v.size();i++){
//        cin>>v[i];

//     }
//   int start=0;
//   int end=v.size()-1;
//   while(start<end){
//     if(v[start]%2!=0 && v[end]%2==0){
//         int temp=v[start];
//         v[start]=v[end];
//         v[end]=temp;
//         start++;
//         end--;     
//     }
//     if(v[start]%2==0){
//         start++;
//     }
//     if(v[end]%2!=0){
//         end--;
//     }
//   }

//   for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//   }

// }


// Q. array has non-decreasing order and find out the its Square of non-decreasing order


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void sortedSquareArray(vector<int> &v){
//     vector<int>ans;
//     int start=0;
//     int end=v.size()-1;
//     while(start<=end){
//       if(abs(v[start]) < abs(v[end])){
//          ans.push_back(v[end]*v[end]);
//          end--;
//       } 
//       else{
//         ans.push_back(v[start]*v[start]);
//         start++;
//       }
//     }

//   reverse(ans.begin(),ans.end());

//   for(int i=0;i<v.size();i++){
//     cout<<ans[i] <<" ";
// }

// }


// int main(){
//   int n;
//   cout<<"Enter the size of vector";
//   cin>>n;
//  vector<int>v;
//  cout<<"Enter the vector element:"<<endl;
//  for(int i=0;i<n;i++){
//   int ele;
//   cin>>ele;
//   v.push_back(ele);
//  }

//  sortedSquareArray(v);
// return 0;

// }


// Q.above re-try;
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortedArraySquare(vector<int>&v){
  vector<int>ans;
  int i=0;
  int j=v.size()-1;
  while(i<=j){
    if(abs(v[i]<abs(v[j]))){
      ans.push_back(v[j]*v[j]);
      j--;
    }
    else{
      ans.push_back(v[i]*v[i]);
      i++;
    }

  }
  reverse(ans.begin(),ans.end());

  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }

}

int main(){
  int n;
  cout<<"Enter the size of vector:";
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
  }

  sortedArraySquare(v);
  return 0;


}