#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[10];
    cout<<"Enter the array element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
       int min=i;
       for(int j=i+1;j<n;j++){
          if(arr[j]<arr[min]){
            min=j;
          }
       }
       if(min!=i){
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
       }
    }
  for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}