#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;
    if(n%2==0){
        int ans=power(x,n/2);
        return ans*ans;
    }
    else{
        int ans=power(x,n/2);
        return ans*ans*x;
    }
}

int main(){
   int y = power(3,3);
   cout<<"the power is:"<<y;
}