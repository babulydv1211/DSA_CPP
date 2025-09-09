// #include<iostream>
// using namespace std;
// int hcf(int a,int b){
//     for(int i=min(a,b);i>=2;i--){
//         if(a%i==0 && b%i==0){
//             return i;
//         }
        
//     }
//     return 1;
// }

// int main(){
//     int a=24;
//     int b=60;
//   cout<< hcf(24,60);
// }

// using recursuin
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
    // yha kiksi vi order nin number dal skte h a%b=a,a<b,if a>b ,then give remender
    int a=24;
    int b=60;
    cout<<"the hcf of 2 number is:"<<gcd(a,b);
}