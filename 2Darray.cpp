// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3];
//     cout<<"Enter the array element:"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//         }
        
//     } 

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j];
//         }
//         cout<<endl;
//     }
// }


// //write a program to store roll number and and crossponding marks
// #include<iostream>
// using namespace std;
// int  main(){
//     int marks[4][2];
//     cout<<"Enter the marks and rollno of student:"<<endl;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<2;j++){
//             cin>>marks[i][j];
//         }
//     }

//     for(int i=0;i<4;i++){
//         for(int j=0;j<2;j++){
//             cout<<marks[i][j];
//         }
//         cout<<endl;
//     }
// } 

//Q.wap in 2d matrix store at 10 every index;
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5][5];
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             a[i][j]=10;
//         }
//     }

//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//           cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// } 

//q.write a program two add to matrix;
// #include<iostream>
// using namespace std;
// int main(){
//     int a[3][3],b[3][3] ,c[3][3];
//     cout<<"Enter the 1st array element:"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//         }
//     }
//     cout<<"Enter the 2nd array element:"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>b[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//              c[i][j]=a[i][j]+b[i][j];
//         }
//     }

//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//            cout<<  c[i][j]<<" ";
//         }
//         cout<<endl;
//     }


// }

//Q.find the maxium element in a given matrix;
// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"Enter the value of row:";
//     cin>>m;
//     cout<<"Enter the value of column:";
//     cin>>n;
//     int a[m][n];
//     cout<<"Enter the array element:"<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>a[i][j];
//         }
//     }  
//     int max=a[0][0];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(a[i][j]>max){
//                 max=a[i][j];
//             }
//         }
//     }

//     cout<<"The max element in a matrix:"<<max;
// }

// Q.find the sum of all elemnt in a given matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int a[3][3];
//     cout<<"Enter the array element:"<<endl;
//    for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//        cin>>a[i][j];
//     }
//   }
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         sum=sum+a[i][j];
//     }
//   }

//   cout<<"The total sum of given matrix is:"<<sum;
// }

//q.find the product of all element in a given matrix;
// #include<iostream>
// using namespace std;
// int main(){
//     int pro=1;
//     int a[3][3];
//     cout<<"Enter the array element:"<<endl;
//    for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//        cin>>a[i][j];
//     }
//   }
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         pro=pro*a[i][j];
//     }
//   }

//   cout<<"The total sum of given matrix is:"<<pro;

// }