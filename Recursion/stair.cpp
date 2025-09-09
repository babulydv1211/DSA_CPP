// #include<iostream>
// using namespace std;
// int stair(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     return stair(n-1)+stair(n-2);
// }

// int main(){
//  int n;
//  cout<<"Enter the number of climbing stair:";
//  cin>>n;
// int y= stair(n);
// cout<<"The total number of ways is:"<<y;
// }


//if fstep climbing either 1 ,either 2 and 3 then total number of ways
#include<iostream>
using namespace std;
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair(n-1)+stair(n-2)+stair(n-3);
}

int main(){
  int n;
  cout<<"Enter the total number of stair:";
  cin>>n;
 int y= stair(n);
 cout<<"The total number if ways in 1,2 and 3 step is allow:"<<y;
}



