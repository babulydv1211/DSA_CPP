// #include<iostream>
// using namespace std;

// void gun(){
//    cout<<"Hello children";
// }

// void fun(){
//     cout<<"Hello student"<<endl;
//     gun();
// }
// int main(){
//      fun();
// }



#include<iostream>
using namespace std;

void funHello(int n){
    if(n==0) return ;
  cout<<"Good morning"<<endl;
  funHello(n-1);

}

int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    funHello(n);
}