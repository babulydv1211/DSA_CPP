//swap of two number
// #include<iostream>
// using namespace std;
// int main(){
//  int a,b,temp;
//  cout<<"Enter the value of a:";
//  cin>>a;
//  cout<<"Enter the value of b:";
//  cin>>b;
//  temp=a;
//  a=b;
//  b=temp;
//  cout<<"a:"<<a<<endl;
//  cout<<"b:"<<b;
// }


//swap of two number without using extre varible
// #include<iostream>
// using namespace std;
// int main(){
//   int a,b;
//   cout<<"Enter the value of a:";
//   cin>>a;
//   cout<<"Enter the value of b:";
//   cin>>b;
//   a=a+b;
//   b=a-b;
//   a=a-b;
//   cout<<"a:"<<a<<endl;
//   cout<<"b:"<<b;
// }

// //pass by value and pass by refrance
// #include<iostream>
// using namespace std;
// void swap(int& a,int& b){
//     int temp=a;
//     a=b;
//     b=temp;
    
// }
// int main(){
//     int x,y;
//     cout<<"Enter the value of x:";
//     cin>>x;
//     cout<<"Enter the value of y:";
//     cin>>y;
//     swap(x,y);
//     cout<<x<<endl;
//     cout<<y;
// }



//pointer concept;
// #include<iostream>
// using namespace std;
// int main(){
//     int x=3;
//     cout<<&x<<endl;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x=4;
//     int* p=&x;
//     cout<<p<<endl; //isse x ka address print krte h;
//     //ager x ka vlue print krna h to 
//     cout<<*p<<endl;
    
// }


//pointer kihelp se swap of two number;
#include<iostream>
using namespace std;
void swap(int* a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=3;
    int y=4;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    swap(&x,&y);
    cout<<"x="<<x<<endl;
    cout<<"y="<<y;
}