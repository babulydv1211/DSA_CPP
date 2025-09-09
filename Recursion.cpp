//recursion -> itself function calling
//print n to 1
// #include<iostream>
// using namespace std;
// void print(int n){
//     cout<<n<<endl;
//     if(n==1) return;
//     print(n-1);

// }

// int main(){
//   print(10);

// } 

// //print 1 to n  using recursion
// #include<iostream>
// using namespace std;
// int print(int n,int x){
//   cout<<n<<endl;
//   if(n==x)return x;
//   print(n+1,x);
// }


// int main(){
//   int a;
//   cout<<"Enter the last value";
//   cin>>a;
//   print(1,a);
// }


//print 1 to n without using extra varible;

// #include<iostream>
// using namespace std;
// int print(int x){
//   if(x==0) return;
//   cout<<x<<endl;
//   print(x-1);
// }
// int main(){
//   int n;
//   cout<<"Enter the value of n:";
//   cin>>n;
//   print(n);
// }

// print sum of from 1 to n 
// #include<iostream>
// using namespace std;
// int sum(int n){
//   if(n==1) return 1;
//   return n+sum(n-1);
// }

// int main(){
//   int n;
//   cout<<"Enter the value of n:";
//   cin>>n;
//   cout<<sum(n);
// }


//Q. to calculate factorial using recursion
// #include<iostream>
// using namespace std;
// int fact(int n){
//   if(n==1) return 1;
//   return n*fact(n-1);
// }
// int main(){
//   int n;
//   cout<<"Enter the value of n:";
//   cin>>n;
//   cout<<fact(n);
// }

//Q.to calculate power of a rais to b
// #include<iostream>
// using namespace std;
// int power(int a,int b){
//   if(b==0) return 1;
//   return a * power(a,b-1);
// }
// int main(){
//   int a,b;
//   cout<<"Enter the value of base:";
//   cin>>a;
//   cout<<"Enter the value of power:";
//   cin>>b;
//   cout<<power(a,b);
// }


//Q. print the fibonacii series;
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter the value of n:";
//   cin>>n;
//   int a=0;
//   int b=1;
//  int c;
//   for(int i=1;i<=n;i++){
//     cout<<a<<endl;
//     c=a+b;
//     a=b;
//     b=c;
    
//   }
  
// }

//Q. write a program to calculate nth fibonacii of a number using resursion

#include<iostream>
using namespace std;
int fibo(int n){
  if(n==1 || n==2)  return 1;
  return fibo(n-1)+fibo(n-2);
}
int main(){
  int n;
  cout<<"Enter the value of n:";
  cin>>n;
  cout<<"The nth fibonacii is:"<<fibo(n);
}