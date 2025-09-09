// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello";
// }


//.......
// #include<iostream>
// using namespace std;
// int main (){
//     int x,y;
//     x=5;
//     y=9;
//     int sum=x+y;
//     int sub=x-y;
//     int div=x/y;
//     int mod=x%y;

//     cout<<sum;
//     cout<<endl;
//     cout <<sub;
// }
//calculate area of cirlce
// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<< "Enter the radius";
//     cin>>r;
//     int area= 3.14*r*r;
//     cout <<"the total area is:"<<area;

// }

// // make a calculater using if else
// #include<iostream>
// using namespace std;
// int main(){
//     int n1;
//     cout<<"Enter the 1st number:";
//     cin>>n1;
//     char op;
//     cout<<"Enter the operation:";
//     cin>>op;
//     cout<<"Enter the 2nd number:";
//     int n2;
//     cin>>n2;
//     if(op=='+')cout<<n1+n2;
//     if(op=='-')cout<<n1-n2;
//     if(op=='*')cout<<n1*n2;
//     if(op=='/')cout<<n1/n2;


// }

//using switch case make a calculater
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number";
//     cin>>a;
//      char op;
//     cout<<"Enter the operation";
//     cin>>op;
//     int b;
//     cout<< "Enter the 2nd number";
//     cin>>b;
   
//     switch(op){
//         case '+':
//             cout<<a+b;
//              break;
//         case '-':
//             cout<<a-b;
//              break;
//         case '/':
//            cout<<a/b;
//            break;
//         case '%':
//            cout<<a%b;
//             break;
//         default:
//         cout<<"invalid Operater";

//     }


// }
//............................................strating loop........

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<10;i++){
//         cout<<"Hello my dear friend"<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=10;i++){
//         cout<<i<<endl;
//     }
// }
// ...........sum of n narural number
// #include<iostream>
// using namespace std;
// int main(){
//     int i,sum,n;
//     cout<<"Enter the range of natural number";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         sum=sum+i;
//     }
//   cout<<"the total sum is:"<<sum;
    
// }

//.....print even number from 1 to 100
// #include<iostream>
// using namespace std;
// int main(){
//     int n ,i;
//     cout<<"Entre the range";
//     cin>>n;
//     for(i=1;i<n;i++){
//         if(i%2==0){
//             cout<<i<<endl;
//         }
//     }
// }
//....another mathed even number print.....
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=2;i<=100;i=i+2){
//         cout<<i<<" ";
//     }
// }

// // print the table of 19
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     for(int i=19;i<=190;i=i+19){
//         cout<<i<<" ";
//     }
// }

// print the table of n

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"Enter the counting table";
//     cin>>n;
//     for(i=n;i<=n*10;i=i+n){
//         cout<<i<<" ";
//     }
// } 

// to print the given of n term
// agar user n=5 diya to hme 5 odd number print karana h
// yani last term ap = a+(n-1)d=2n-1 hota h isko solve krke

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"Enter the number you want to print ";
//     cin>>n;
//     for(i=1;i<=2*n-1;i+=2){
//         cout<<i<<" ";
//     }
// }
// print the Gp 3,12,48,...... upto n
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// int a=3;
// cout<< "Enter the value "  ;
// cin>>n; 
//  for(int i=1;i<=n;i++){
//     cout<<a<<" ";
//     a=a*4;
//  }
// }


//.........Break.......
// write a program to find the heighest factor of a number of n khud ko chhor kar
// isme loop n bar chal rha h 
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,temp;
//     cout<< "Enter the number";
//     cin>>n;
//     for(i=1;i<n;i++){
//         if(n%i==0){
//              temp=i;
//         }
//     }
//     cout<<"The heighest factor of n"<<temp;
// }

// 2nd method of heighest factor nikalne ka 
#include<iostream>
using namespace std;
int main(){
    int n, i;
    cout<<"Enter the number of factor:";
    cin>>n;
    for(i=n/2;i>1;i--){
        cout<<"the heighest factor of n:"<<i;
        break;
    }
}