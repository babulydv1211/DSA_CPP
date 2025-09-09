// prefix sum of element without using extra array;
// #include<iostream>
// #include<vector>
// using namespace std;
// void prefixsum(vector<int>&v){
//   for(int i=1;i<v.size();i++){
//     v[i]=v[i-1]+v[i];
//   }

//   for(int i=0;i<v.size();i++){
//     cout<<v[i]<<"  ";
//   }

// }

// int main(){
//     int n;
//     cout<<"Enter the size of vector";
//     cin>>n;
//     vector<int>v;
//     cout<<"Enter the vector element: "<<endl;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }

//     for( int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//      cout<<endl;
//     prefixsum(v);
//     return 0;
// }


// Q. can i partision of array in two equal sum of sub array whose prefix sum =sufix sum
// #include<iostream>
// #include<vector>
// using namespace std;

// bool checkPrefixSuffixsum(vector<int>&v){
//   // total sum of array
//   int sum=0;
//   for(int i=0;i<v.size();i++){
//     sum=sum+v[i];
//   }

// // calculate  prefix sum is
// int prefixsum=0;
// for(int i=0;i<v.size();i++){
//   prefixsum=prefixsum+v[i];
//   int suffixsum=sum-prefixsum;

//   if(suffixsum==prefixsum){
//     return true;
//   }
// }

// return false;

// }

// int main(){
//     int n;
//     cout<<"Enter the size of vecotor:";
//     cin>>n;
//   vector<int>v;
//   cout<<"Enter the vector element"<<endl;
//   for(int i=0;i<n;i++){
//     int ele;
//     cin>>ele;
//     v.push_back(ele);
//   }

//   // chect prefixsuffixsum of array
//   cout<<checkPrefixSuffixsum(v)<<endl;


// }


//Q. print the sum of array is given range L to r
 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
  int n;
  cout<<"Enter the size of vector:";
  cin>>n;
  vector<int>v;
  cout<<"Enter the vector element:"<<endl;
  for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
  }
  int l,r;
  cout<<"Enter the value of L:";
  cin>>l;
  cout<<"Enter the value of r:";
  cin>>r;
  int prefixsumr=0;
  //calculate prefix sum of r range;
   for(int i=0;i<r;i++){
    prefixsumr=prefixsumr+v[i];
   }

   //now calculate l prefixsum
   int prefixsuml=0;
   for(int i=0;i<l-1;i++){
    prefixsuml=prefixsuml+v[i];
   }

   cout<<"The sum of range l to r is:"<<prefixsumr-prefixsuml;

 }
 