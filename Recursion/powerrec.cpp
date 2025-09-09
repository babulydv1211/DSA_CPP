#include<iostream>
using namespace std;

int power(int a,int b){
    if(b==0) return 1;
    int x=1;
   return x=x*a*power(a,b-1);
}


int main(){
  int y= power(3,4);
  cout<<"The power is given number is:"<<y;
}