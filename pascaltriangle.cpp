// #include<iostream>
// using namespace std;
//  int fact(int x){
//     int f=1;
//     for(int i=1;i<=x;i++){
//         f=f*i;   
//     }
//     return f;
//  }

//  int ncr(int n,int r){
//     return fact(n)/(fact(r)*fact(n-r));
//  }


// int main(){
//     int n,i,j;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(i=0;i<=n;i++){
//         for(j=0;j<=i;j++){
//             cout<<ncr(i,j)<<" ";
//         }
//         cout<<endl;
//     }
    
// }


// Now print the prymid wala passcal triangle
#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n,i,j,k;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<=n-i-1;j++){
            cout<<""<<"  ";
        }
      for(k=0;k<=i;k++){
        cout<<ncr(i,j)<<"   ";
      }
      cout<<endl;
    }
}

