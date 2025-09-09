//wap to print the number 1 to 20 except 3 and 5 
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=20;i++){
      if(i==3 || i==5){
        continue;
      }
      cout<<i<<" ";
    }
}