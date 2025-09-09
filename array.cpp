//array initilazation and decleration
// #include<iostream>
// using  namespace std;
// int main(){
//     int arr[9];
//     cout<<"Enter the array elemet:";
//     for(int i=0;i<=5;i++){
//         cin>>arr[i];
//     }
//    for(int i=0;i<=5;i++){
//     cout<<arr[i]<<" ";
//    }
// }

//Q.to print the array in reverse order
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<=4;i++){
//         cout<<arr[i]<<" "<<endl;
//     }
//     for(int i=4;i>=0;i--){
//         cout<<""<<arr[i]<<" ";
//     }
// }


//Q.array pass by refrance hota h
// #include<iostream>
// using namespace std;
// void change(int arr[]){
//     arr[0]=7;
// }
// int main(){
//     int arr[]={1,3,4,5,6};
//     for(int i=0;i<=4;i++){
//         cout<<arr[i]<<" ";
//     }
//     change(arr);
//     for(int i=0;i<=4;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// //Q.calculate the sum of  given array;
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int arr[5]={1, 2, 3, 4,5};
//     for(int i=0;i<=4;i++){
//         sum=sum+arr[i];
//     }
//     cout<<"The total sum is:"<<sum;
// }

//Q. to claculate the product of given array;
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10],pro=1;
//     cout<<"Enter the array element:"<<endl;
//     for(int i=0;i<=5;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<=5;i++){
//         pro=pro*arr[i];
//     }
//     cout<<"The total product is:"<<pro;
// }

//Q.find the maxm value in given array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int arr[20];
//     cout<<"Enter the array element:"<<endl;
//     for(int i=0;i<=n;i++){
//         cin>>arr[i];

//     }
//     int max=arr[0];
//     for(int i=1;i<=n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"The maxm value of given array:"<<max;

// }

//Q.given an intiger to create an array to print the square of this array;
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int arr[10];
//     cout<<"Enter the array element:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]*arr[i]<<" ";
//     }
    
// }

//Q.Given an array of intigers, change the value of all odd index element
//  to its second multiple and increment all even indexded value by 10;

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int arr[10];
//     cout<<"Enter the array element"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//        if(i%2==0){
//         arr[i]=arr[i]+10;
//        }
//        else{
//         arr[i]=arr[i]*2;
//        }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


//Q.count the number of element in given array greater than a given number
// #include<iostream>
// using namespace std;
// int main(){
//     int n,count=0;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int arr[10];
//     cout<<"Enter the array element"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     int a;
//     cout<<"Enter the compare element:";
//     cin>>a;
//     for(int i=0;i<n;i++){
//         if(arr[i]>a){
//             count++;
//         }
//     }
//     cout<<"The total greater number is:"<<count;
// }


//q.find the difference b/w the sum of element at even index to sum of element at odd index
// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum1=0,sum2=0;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int arr[10];
//     cout<<"Enter the array element:";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             sum1=sum1+arr[i];
//         }
//         else{
//             sum2=sum2+arr[i];
//         }
//     }
//     int result=sum1-sum2;
//     cout<<"The differnce is :"<<result;
// }

//Q.find the 2nd maxm in a given array;
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int arr[10];
//     cout<<"Enter the array element:"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//     int max=arr[0];
//     int secmax=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             secmax=max;
//             max=arr[i];
//         }
//         else if( arr[i]<max && arr[i]>secmax){
//            secmax=arr[i];
//         }
//     }
//     cout<<"The 2nd max is given array is:"<<secmax;
// }


// //Q.write a program to reverse an array without using extra array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,3,4,5,6};
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int i=0,j=4;
//     while(i<j){
//       int  temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;

//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// //Q.to write a program to check number is pallindrome;
// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={1,2,3,2,1}; 
//     int i=0,j=4;
//     while(i<j){
//         if(a[i]==a[j]){
//             cout<<"this number is pellindrome";
//             break;
//         }
//         else{
//             cout<<"number  is not pellindrome";
            
//         }
//         i++;
//         j--; 
//     }

// }