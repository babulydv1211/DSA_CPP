// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"Hello Good moring"<<endl;
//     cout<<"How are you"<<endl;
// }
// int main(){
//  greet();// function call
//  cout<<"Hello my drling"<<endl;
//  greet();

// }

//sum function banana h
// #include<iostream>
// using namespace std;
// int sum(int x,int y){
//     return x+y;
// }

// int main(){
//    int a,b;
//    cout<<"Enter the value 1st";
//    cin>>a;
//    cout<<"Enter the value of 2nd:";
//    cin>>b;
//   cout<<sum(a,b);

// }

// // 2nd method pass by value
// #include<iostream>
// using namespace std;

// void sum(int a, int b){
//     cout<<a+b;
// }
// int main(){
//     sum(2,3);
// }

//Library function

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     cout<<sqrt(4);
// }


//combination and permutaion
// #include<iostream>
// using namespace std;
// int fact(int x){
//    int  f=1;
//     for(int i=1;i<=x;i++){
//         f=f*i;
//     }
//     return f;
// }

// int main(){
//      int n,r;
//     cout<<"Enter the value of n";
//     cin>>n;
//     cout<<"Enter the value of r";
//     cin>>r;
//     int a=fact(n);
//     int b=fact(r);
//     int c=fact(n-r);
//     int comb=a/(b*c);
//     cout<<"The combination is :"<<comb;
// }

// to calculate permutation
// p=npr=n!/(n-r)!
#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n,r;
    cout<<"Enter the number of n:";
    cin>>n;
    cout<<"Enter the value of r:";
    cin>>r;
    int a=fact(n);
    int b=fact(n-r);
    cout<<"The permutation is:"<<a/b;

}