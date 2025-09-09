// //wap to prin the reverse of number;
// #include<iostream>
// using namespace std;
// int main(){
//     int n,rev=0;
//     cout<<"Enter the number";
//     cin>>n;
//     while(n>0){
//         int ld=n%10;
//         rev=rev*10+ld;
//         n=n/10;
        
//     }

//     cout<<"The rversenumber of digit:-"<<rev;
// }


// write a program to print the reverse of a given number
#include<iostream>
using namespace std;
int main(){
    int n,sum1=0,sum2=0,rev=0,temp,ld;
    cout<<"Enter the number ";
    cin>>n;
    int n1=n;
    while(n>0){
        ld=n%10;
        sum1=sum1+ld;
        n=n/10;
    }
    cout<<"The sum of given digit is:"<<sum1<<endl;


    while(n1>0){
       int ld1=n1%10;
      rev=rev*10+ld1;
       n1=n1/10;

    }
     cout<<"The reverse number is:-"<<rev<<endl;
     temp=rev;
    while(temp>0){
       int ld2=temp%10;
        sum2=sum2+ld2;
        temp=temp/10;
    }
    cout<<"The sum of digit is:-"<<sum2<<endl;
   
}