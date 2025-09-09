#include<iostream>
using namespace std;

int oddsum(int a,int b){
    int sum=0;
    if(a>b)return 0;
    if(a%2!=0){
    return sum+a+oddsum(a+1,b);
    }else{
        return oddsum(a+1,b);
    }
}

int main(){
int y=   oddsum(3,11);
cout<<y;

}