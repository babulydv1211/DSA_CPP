#include<iostream>
using namespace std;

int factorial(int n){
    if (n==0) return 1; //base case
    int fact=n*factorial(n-1);
    return fact;

}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
   int x= factorial(n);

    cout<<"The factorial of this number is:"<<x;
}