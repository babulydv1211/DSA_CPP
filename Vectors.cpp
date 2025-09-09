// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>v;
// cout<<"size:"<<v.size()<<endl;
// cout<<"capacity:"<<v.capacity()<<endl;

// v.push_back(1);
// cout<<"Size:"<<v.size()<<endl;
// cout<<"Capacity:"<<v.capacity()<<endl;

// v.push_back(2);
// cout<<"Size:"<<v.size()<<endl;
// cout<<"Capacity:"<<v.capacity()<<endl;

// v.push_back(3);
// cout<<"Size:"<<v.size()<<endl;
// cout<<"Capacity:"<<v.capacity()<<endl;

// v.push_back(4);
// cout<<"Size:"<<v.size()<<endl;
// cout<<"Capacity:"<<v.capacity()<<endl;

// v.resize(20);
// cout<<"Size:"<<v.size()<<endl;
// cout<<"Capacity:"<<v.capacity()<<endl;

// v.pop_back();
// cout<<"Size:"<<v.size()<<endl;
// cout<<"Capacity:"<<v.capacity()<<endl;


// }

//Looping in vector;
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;
//     cout<<"Enter the vector element:"<<endl;
//     for(int i=0;i<5;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
  
//   for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" "<<endl;
//   }
// // insert element at begning at 2positin
//   v.insert(v.begin()+2,6);
//   for(int i=0;i<v.size();i++){
//     cout<<v[i];
//   }
  
// }


//Q.//find the last occurance of an element presnt in a array;yani jo number jitni bar present h uska last wala index print krna h
// #include<iostream>
// using namespace std;
// int main(){
//   int a[7];
//   cout<<"Enter teh array elemet:"<<endl;
//   for(int i=0;i<7;i++){
//     cin>>a[i];
//   }
//   int x;
//   cout<<"Enter the number";
//   cin>>x;
//   int occur=0;
//   for(int i=0;i<7;i++){
//     if(a[i]==x){
//       occur=i;
//     }
//   }
//   cout<<"The lst occur in element is:"<<occur;

// }

//Q.find the cout the number of occurance of a particuler element x;
// #include<iostream>
// using namespace std;
// int main(){
//   int a[7],count=0;
//   cout<<"Enter the array element:"<<endl;
//   for(int i=0;i<7;i++){
//     cin>>a[i];
//   }
//   int x;
//   cout<<"Enter the number ";
//   cin>>x;
//   for(int i=0;i<7;i++){
//     if(a[i]==x){
//       count++;
//     }
//   }
// cout<<"The number of time present:"<<count;

// }


//Q.count the number of element strictly greater than value x;
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   vector<int >v(5);
//   cout<<"Enter the vector element:"<<endl;
//   for(int i=0;i<5;i++){
//     cin>>v[i];
//   }
//   int x;
//   int count=0;
//   cout<<"Enter the value of x:";
//   cin>>x;
//   for(int i=0;i<5;i++){
//     if(v[i]>x){
//     count++;
//     }
//   }
//   cout<<"The total number greater then x:"<<count;
// }


//Q.to check array is sorted or not;
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   vector<int>v(5);
//   bool flag=false;
//   cout<<"Enter the vector element:"<<endl;
//   for(int i=0;i<5;i++){
//     cin>>v[i];
//   }
//   for(int i=0;i<5;i++){
//     if(v[i]<v[i+1]  ){
//       flag=true;
//     }
//     else{
//       flag=false;
//     }
//   }
//   cout<<flag;

// }

// Q.target sum

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   vector<int>v(5);
//   cout<<"Enter the vector element:"<<endl;
//   for(int i=0;i<5;i++){
//     cin>>v[i];
//   }
//  int sum,pair=0;
//  cout<<"Enter the target sum:";
//  cin>>sum;
//  for(int i=0;i<5;i++){
//   for(int j=i+1;j<5;j++){
//     int s=v[i]+v[j];
//     if(s==sum){
//       pair++;
//     }
//   }
//  }
//  cout<<"The total pair of target sum is:"<<pair;

// }

//Q.count the number of triplate  whose sum is equal to given value of x

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   vector<int>v(5);
//   cout<<"Enter the vector elemnet:"<<endl;
//   for(int i=0;i<5;i++){
//     cin>>v[i];
//   }

//   int x;
//   cout<<"cout enter the 3 target sum number:";
//   cin>>x;
//   int pair=0;

// for(int i=0;i<5;i++){
//   for(int j=i+1;j<5;j++){
//     for(int k=j+1;k<5;k++){
//        int s=v[i]+v[j]+v[k];
//        if(s==x){
//         pair++;
//        }
//     }
//   }
// }
// cout<<"The total pair is:"<<pair;

// }


// //Q.array MAnipulation unique number find
// #include<iostream>
// #include<vector>
// using namespace std;
// int  main(){
//  vector<int>v(7);
//  cout<<"Enter the vector elemnet:"<<endl;
//  for(int i=0;i<7;i++){
//   cin>>v[i];
//  }

// for(int i=0;i<7;i++){
//   for(int j=i+1;j<7;j++){
//     if(v[i]==v[j]){
//       v[i]=-1;
//       v[j]=-1;
    
//   }
// }
// }
// int unique=0;
// for(int i=0;i<7;i++){
//     if(v[i]>0){
//     unique=v[i];
//     }
   
// }

// cout<<"The unique element is:"<<unique;

// }


//Q.find the 2nd lagest elemet in a given array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   vector<int>v(7);
//   cout<<"Enter the vector element:"<<endl;
//   for(int i=0;i<7;i++){
//     cin>>v[i];
//   }

//   int max=v[0];
//   int scmax=-1;
//   for(int i=0;i<7;i++){
//     if(v[i]>max){
//       scmax=max;
//       max=v[i];
//     }
//     else{
//        if(v[i]<max && scmax<v[i]){
//       scmax=v[i];
//   }
//     }
//   }

//   cout<<"The scmax="<<scmax;
 
// }


//Q.find the the rotation of array

// #include<iostream>
// using namespace std;
// int main(){
//   int arr[]={1,2,3,4,5};
//   int n=5;
//   int k=2;
//   k=k%n;
//   int j=0;
//   int arrs[5];
  
//   for(int i=3;i<5;i++){
//    arrs[j++]=arr[i];
   
//   }

//   for(int i=0;i<=2;i++){
//     arrs[j++]=arr[i];

//   }

//   for(int i=0;i<5;i++){
//     cout<<arrs[i] <<" ";
//   }
//   return 0;
// }

// Q.rotation of arrya 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   vector<int>v(5);
//   cout<<"Enter the vector element:"<<endl;
//   for(int i=0;i<5;i++){
//     cin>>v[i];
//   }
//    int k;
//    cout<<"Enter the rotate time :";
//    cin>>k;
//    k=k%5;
//    int j=0;
//    int newarr[5];
//    for(int i=5-k;i<5;i++){
//         newarr[j]=v[i];
//         j++;
//    }

//    for(int i=0;i<=k;i++){
//       newarr[j]=v[i];
//       j++;
//    }


//    for(int i=0;i<5;i++){
//      cout<<newarr[i]<<" ";
//    }
// }

// // without extra memory ko use kiye bina array ko rotate krna h
// #include<iostream>
// #include<math.h>
// #include<algorithm> //jab reverse inbuilt function use krna h to ye headerfile use kro
// #include<vector>
// using namespace std;
// int main(){
//   vector<int>v={1,2,3,4,5};
//   // v.push_back(1); //es trah se bhi elemet le skte h vector min
//   // v.push_back(2);
//   // v.push_back(3);
//   // v.push_back(4);
//   // v.push_back(5);
//   int k;
//   cout<<"Enter the rotate time:"<<endl;
//   cin>>k;
//   k=k%v.size();

//   reverse(v.begin(),v.end());
//   reverse(v.begin(),v.begin()+k);
//   reverse(v.begin()+k,v.end());

// for(int i=0;i<5;i++){
//   cout<<v[i];
// }

// }



// Q. given q quaries check if given number is present
#include<iostream>
using namespace std;
int main(){
  bool flag=false;
  int a[6]={2,3,5,6,7,8};
  int b[4]={2,6,7,11};
  int j=0;
  for(int i=0;i<6;i++){
    if(a[i]==b[j]){
      j++;
    }
    
  }
  
}
