#include<iostream>
using namespace std;
void honai(int n, char a ,char b,char c){
   if (n==0) return ;
    honai(n-1,a,c,b); //a->source ,b->helper ,c-> destination
    cout<<a<<"->"<<c<<endl;
    honai(n-1,b,a,c); // b->source,c->destination,a->helper

}

int main(){
    int n;
    cout<<"Enter the number of disk:";
    cin>>n;
   honai(n,'A','B','c');
}