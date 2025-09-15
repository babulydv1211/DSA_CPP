#include<iostream>
using namespace std;

void calculateArea(int l,int b){
    cout<<l*b<<endl;;
}
void calculateArea(int l){
    cout<<l*l<<endl;;
}

void calculateArea(double r){
    cout<<3.14*r*r<<endl;
}

int main(){
   calculateArea(2,3);
   calculateArea(7);
   calculateArea(3.14);

}