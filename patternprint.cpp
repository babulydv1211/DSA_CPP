//print this
// ******
// ******
// ******
// ******

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n,i,j;
//     cout<<"Enter the row :";
//     cin>>m;
//     cout<<"Enter the column:";
//     cin>>n;
//     for(i=1;i<=m;i++){
//         for(j=1;j<=n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the row";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"* ";
//         }
//     cout<<endl;
//     }
// }



//print this pattern
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the row and column:";
//     cin>>n;
//     for(int i=1;i<+n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

//print this alphabet pattern
// A B C D 
// A B C D
// A B C D
// A B C D

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }


//print this pattern
// A A A A 
// B B B B 
// C C C C 
// D D D D 

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cout<<"Enter the value of n";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<n;j++){
//             cout<<(char)(i+64)<<" ";
//         }
//         cout<<endl;
//     }
// }


//print this
// *
// * *
// * * *
// * * * * 
// * * *  *  *
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j ,n;
//     cout<<"Enter the row:";
//     cin>>n;
//     for(i =1 ;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<"* "<<" ";
//         }
//         cout<<endl;
//     }

// }

//print this pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4

//   #include<iostream>
//   using namespace std;
//   int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<"";
//         }
//         cout<<endl;
//     }
//   }

// print this pattern
// A 
// A B 
// A B C 
// A B C D 

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<(char)(j+64)<<"";
//         }
//         cout<<endl;
//     }
// }


//print this pattern

// * * * * 
// * * *
// * * 
// *

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(i=0;i<n;i++){
//         for(j=0;j<n-i;j++){
//            cout<<"* "<<"";
//         }
//         cout<<endl;
//     }
// }

//print the odd triangle
// 1
// 1 3
// 1 3 5
// 1 3 5 7

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cout<<"Enter the number";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<2*j-1 ;
//             cout<<"";
//         }
//         cout<<endl;
//     }
// }



//print this pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cout<<"Enter the value of n:";
//     cin>>n;
//      int a=1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<a<<" ";
//             a++;
            
//         }
//         cout<<endl;
//     }
// }

//print this triangle

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i ,j;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             if((i+j)%2==0){
//                 cout<<"1"<<" ";
//             }
//             else{
//                 cout<<"0"<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

//printthe given pattern

//     *
//     *
// * * * * * 
//     *
//     * 

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int mid=(n/2) + 1;
//        for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             if(i==mid || j==mid){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//        }
// }


//print this pattern
//        *
//      * * 
//    * * *
//  * * * * 

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j,k;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(i=0;i<=n;i++){
//         for(j=0;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(k=0;k<=i;k++){
//             cout<<"*"<<"";
//         }
//         cout<<endl;
//     }
// }

//print his pattern
//    *
//   * *
//  * * *
// * * * *

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j,k;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(i=0;i<=n;i++){
//         for(j=0;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(k=0;k<=i;k++){
//             cout<<"*"<<" ";  //yha space dena upr wale code min
//         }
//         cout<<endl;
//     }
// }



//print this pattern
//      A 
//     A B
//    A B C
//   A B C D
//  A B C D E

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j,k;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(i=0;i<=n;i++){
//         for(j=0;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(k=0;k<=i;k++){
//             cout<<char(k+65)<<" ";  //yha space dena upr wale code min
//         }
//         cout<<endl;
//     }
// }
