#include<iostream>
using namespace std;
int main(){
    int n,num,flag=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Enter the sreach elemet:";
    cin>>num;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
          flag=1;
          break; //ye nhi lagayenge to mil jane ke bad bhi loop ko check krega time complexicity badh jayega
        }
    }

    if(flag==1){
        cout<<"seraching elemet is found";
    }


}