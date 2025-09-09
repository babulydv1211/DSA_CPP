// #include<iostream>
// using namespace std;
// void sum1toN(int sum,int n){
//     if(n==0){
//         cout<<sum<<endl;
//         return;
//     }
//     sum1toN(sum+n,n-1);
// }

// int main(){
//     sum1toN(0,10);
// }

//print sum from 1 to n(return type)

// #include<iostream>
// using namespace std;
// int sum(int s,int n){
//     if(n==0){
//         return s;
//     }
//  return   sum(s+n,n-1);

// }

// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//    int x= sum(0,n);
//     cout<<"The total sum is 1 to N is:"<<x;
// }


#include<iostream>
using namespace std;
int sum(int n){
    int s=0;
    if (n==0) return s;
 return  s = s+n+sum(n-1);
}

int main(){
  int x=  sum(10);
    cout<<"The sum is:"<<x;
}