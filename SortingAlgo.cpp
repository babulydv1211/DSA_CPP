  //1. bubble sort algo
  //swap the adjecent element when it worng position,jab tak pura swap nhi h o jata 
//   #include<iostream>
//   #include<vector>
//   using namespace std;

//   int main(){
// int n;
// cout<<"enter the size of array:";
// cin>>n;
// vector<int>v(5);
// cout<<"Enter the array elemnet:";
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(v[j]>v[j+1]){
//             int temp=v[j];
//             v[j]=v[j+1];
//             v[j+1]=temp;

//         }
//     }
// }

// cout<<"The sorted array is:\n";
// for(int i=0;i<n;i++){
//   cout<<v[i]<<" ";
// }

// }


//bubble sort use function
// #include<iostream>
// #include<vector>
// using namespace std;
// void bubbleSort(vector<int>&v){

//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v.size();j++){
//              if(v[j]>v[j+1]){
//                 swap(v[j],v[j+1]);
//              }
//         }
//     }
//     return ;
  
// }

// int main(){
// int n;
// cout<<"Enter the size of array:";
// cin>>n;
// vector<int>v(5);
// cout<<"Enter the array elemenet:";
// for(int i=0;i<n;i++){
//     cin>>v[i];
// }

// bubbleSort(v);
// cout<<"The sorted array is:";
// for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
// }

// }


//optimsize the bubble sort algo
// when neraly sorted array is optimize the b ubble sort
// #include<iostream>
// #include<vector>
// using namespace std;

// void bubblesort(vector<int> &v){
//   int n=v.size();

//   for(int i=0;i<n;i++){
//     bool flag= false;
//     for(int j=0;j<n-i-1;j++){
//         if(v[j]>v[j+1]){
//             flag=true;
//             swap(v[j],v[j+1]);
//         }
//     }
//     if(!flag) break;
//   }

//   return;

// }

// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     vector<int>v(5);
//     cout<<"Enter the vector element:";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     bubblesort(v);
//     cout<<"The sorted array is:\n";
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }


// selection sort algo

// #include<iostream>
// #include<vector>
// using namespace std;
// void selectionSort(vector<int>&v){
//     int n=v.size();
//     int j ,i;
//     for(int i=0;i<n;i++){
//       int min =i;
//       for(j=i+1;j<n;j++){
//         if(v[j]< v[min]){
//            min =j;
//         }
//       }
//       if(i!=min){
//         swap(v[i],v[min]);
//       }
     
//     }
//     return ;
// }

// int main(){
//   int n;
//   cout<<"Enter the size of array:";
//   cin>>n;
//   vector<int>v(5);
//   cout<<"Enter the array element:";
//   for(int i=0;i<n;i++){
//     cin>>v[i];
//   }
//   selectionSort(v);

//   cout<<"The sorted array is:";
//   for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
//   }

// }



// insertion sort
// #include<iostream>
// #include<vector>
// using namespace std;

// void insertionSort(vector<int>&v){
//   int n=v.size();
//   for(int i=1;i<n;i++){
//     int temp =v[i];

//     int j=i-1;
//     while(j>=0 && temp<v[j]){
//       v[j+1] =v[j];
//       j--;
//     }
//     v[j+1]=temp;
//   } 
//   return ;

// }
// int main(){
//   int n;
//   cout<<"Enter the size of array:";
//   cin>>n;
//   vector<int>v(5);
//   cout<<"Enter the vector element:";
//   for(int i=0;i<n;i++){
//     cin>>v[i];
//   }

//   insertionSort(v);
//   cout<<"The sorted array is:";
//   for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
//   }
// }


// Question 0 5 0 3 42
// output 5 3 42 0 0
// move all 0 end while mantaining the elative position
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter the size of array:";
//   cin>>n;
//   vector<int>v(5);
//   cout<<"Enter the vector element:";
//   for(int i=0;i<n;i++){
//     cin>>v[i];
//   }

//   for(int i=1;i<n;i++){
//     int temp=v[i];
//     int j=i-1;
//     while( j>=0 && v[j]==0){
//       v[j+1]=v[j];
//       j--;
//     }
//     v[j+1]=temp;
//   }

// for(int i=0;i<n;i++){
//   cout<<v[i]<<" ";
// }

// }


// merge sort algo

// #include <iostream>
// #include <vector>

// using namespace std;

// void merge(vector<int>& v, int l, int mid, int r) {
//     int m = mid - l + 1;
//     int p = r - mid;
//     vector<int> a(m);
//     vector<int> b(p);

//     // Copy elements into temp arrays
//     for (int i = 0; i < m; i++) {
//         a[i] = v[l + i];
//     }
//     for (int j = 0; j < p; j++) {
//         b[j] = v[mid + 1 + j];
//     }

//     int i = 0, j = 0, k = l;
//     // Merge two sorted subarrays
//     while (i < m && j < p) {
//         if (a[i] <= b[j]) {
//             v[k] = a[i];
//             i++;
//         } else {
//             v[k] = b[j];
//             j++;
//         }
//         k++;
//     }

//     // Copy remaining elements of a[]
//     while (i < m) {
//         v[k] = a[i];
//         i++;
//         k++;
//     }

//     // Copy remaining elements of b[]
//     while (j < p) {
//         v[k] = b[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(vector<int>& v, int l, int r) {
//     if (l >= r) return;

//     int mid = ( l + r ) / 2;
//     mergeSort(v, l, mid);
//     mergeSort(v, mid + 1, r);
//     merge(v, l, mid, r);
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
    
//     vector<int> v(n);
//     cout << "Enter the vector elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     mergeSort(v, 0, n - 1);

//     cout << "The sorted array is: ";
//     for (int i = 0; i < n; i++) {
//         cout << v[i] << " ";
//     }

//     return 0;
// }


// Q. imaplement marge sort algo to sort an array of element in decreasing order
// #include<iostream>
// #include<vector>
// using namespace std;
// void marge(vector<int>&v,int l,int mid, int r){

//     int m=mid-l+1;
//     int s=r-mid;
//     vector<int>b(m);
//     vector<int>c(s);

//     // create temp array;
//     for(int i=0;i<m;i++){
//         b[i]=v[l+i];

//     }
//     for(int j=0;j<s;j++){
//          c[j]=v[mid+1+j];
//     }

//     int i=0,j=0,k=l;
//    while(i<m && j<s){
//     if(b[i]<c[j]){
//         v[k]=c[j];
//         k++;
//         j++;
//     }
//     else{
//         v[k]=b[i];
//         k++;
//         i++;
//     }

//    }
//    while(j<s){
//     v[k]=c[j];
//     k++;
//     j++;
//    }

//    while(i<m){
//     v[k]=b[i];
//     k++;
//     i++;
//    }

// }
// void margeSort(vector<int>&v,int l , int r){
//   if(l>=r) return;
//   int mid =(l+r)/2;
//   margeSort(v, l,mid);
//   margeSort(v,mid+1,r);
//   marge(v,l, mid,r);
// }
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter the vector element:";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     margeSort(v,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }


// count inversion ye hota h ager left wala element bra ho right wala element se
// Brutforce approch
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of vector element:";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter the vector element:";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     int count=0;

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(v[i]>v[j]){
//              count++;
//             } 
//         }
//     }

//     cout<<"The total inversion element is:"<<count;
// }


// quick sort algo
// #include<iostream>
// #include<vector>
// using namespace std;

// int partition(vector<int>&v,int l,int r){
//      int n=v.size();
//      int i=l-1;
//      int pivot=v[r];
//      for(int j=0;j<n-1;j++){
//           if(v[j]<pivot){
//             i++;
//             swap(v[i],v[j]);
//           }
//      }
//      swap(v[i+1],v[r]);
//      return i+1;

// }

// void quickSort(vector<int>&v,int l,int r){
//     int n=v.size();
//      if(l>=r){
//         return;
//      }

//      // recursive case
//      int pi= partition(v,l,r);
//         quickSort(v,l,pi-1);
//         quickSort(v,pi+1,r);
     
      
// }

// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter the vector element:";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     quickSort(v,0,n-1);
//     cout<<"The sorted array is:";
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }

// }


// Quick sort retry 
// in this quick soet is pivot element is last element;

//20 12 16 18 30 35


// #include<iostream>
// #include<vector>
// using namespace std;
// int partition(vector<int>&v,int l, int r){
//   int n=v.size();
//   int pivot=v[r];
//   int i=l-1;
//   for(int j=0;j<n-1;j++){
//     if(v[j]<pivot){
//       i++;
//       swap(v[i],v[j]);
//     }
//   }
//   swap(v[i+1],v[r]);
//   return i+1;
// }

// void QuickSort(vector<int>&v,int l,int r){
//   int n =v.size();
//   if(l>=r) return;
//   int pi= partition(v,l,r);
//   QuickSort(v,l,pi-1);
//   QuickSort(v,pi+1,r);
// }


// int main(){
//   int n;
//   cout<<"Enter the size of vector:";
//   cin>>n;
//   vector<int>v(n);
//   cout<<"Enter the vector element:";
//    for(int i=0;i<n;i++){
//     cin>>v[i];
//    }

//    QuickSort(v,0,n-1);
//    cout<<"The sorted array is:";
//    for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
//    }
// }

// Quick sort
// now in this sorting pivot element is 1st element

// #include<iostream>
// #include<vector>
// using namespace std;
// int partition(vector<int>&v,int l,int r){
//   //assume pivot element 1st element
//   int pivot=v[l];
//   int count=0;
//   for(int i=l+1;i<v.size();i++){
//     if(v[i]<=pivot){
//       count++;
//     }
//   }
//   //correct position of piovet element
//   int pivotIndx=count+l;
// // isse pivot element apne shi iindex per chla gya
//   swap(v[l],v[pivotIndx]);
  

//   //now pivot elemnt se chhota element ko left side or big element ko right side
//   int i=l;
//   int j=r;
//   while(i< pivotIndx && j>pivotIndx){
//     if(v[i]<pivot) i++;
//     if(v[j]>pivot) j--;

//     else if(v[i]>pivot && v[j]<=pivot){
//       swap(v[i],v[j]);
//       i++;
//       j--;
//     }
  
//   }

//   return pivotIndx;

// }
// void QuickSort(vector<int>&v,int l,int r){
//   if(l>=r) return ;
//   int pi=partition(v,l,r);
//   QuickSort(v,l,pi-1);
//   QuickSort(v,pi+1,r);

// }


// int main(){
//   int n;
//   cout<<"Enter the size of array:";
//   cin>>n;
//   vector<int>v(n);
//   cout<<"Enter the vector element:";
//   for(int i=0;i<n;i++){
//     cin>>v[i];
//   }

//   QuickSort(v,0,n-1);

// cout<<"The sorted array is:";
// for(int i=0;i<n;i++){
//   cout<<v[i]<<" ";
// }

// }


// now when pivot element chose 1st index element then time complexity worst case n square 
// so then pivot element choose  random

// random pivot element is

// #include<iostream>
// #include<vector>
// using namespace std;
// int partition(vector<int>&v,int l,int r){
//   int m=(l+r)/2;
//     int pivot=v[m];// random number is pivot element
//     int count=0;
//     for(int i=l;i<=r;i++){
//       if(i==m) continue;
//       if(v[i]<=pivot){
//         count++;
//       }
//     }
//   int pivotInx=count+l;
//   swap(v[m],v[pivotInx]);

//   int i=l;
//   int j=r;
//   while(i< pivotInx && j>pivotInx){
//        if(v[i]< pivot) i++;
//        if(v[j]>pivot)  j--;

//        else if( v[i]> pivot && v[j]< pivot){
//         swap(v[i],v[j]);
//         i++;
//         j--;
//        }

//   }
//   return pivotInx;

// }

// void QuickSort(vector<int>&v,int l,int r){
//      if(l>=r) return ;

//      int pi=partition(v,l,r) ;
//      QuickSort(v,l,pi-1);
//      QuickSort(v,pi+1,r);
     
// }

// int main(){
//   int n;
//   cout<<"Enter the size of array:";
//   cin>>n;
//   vector<int>v(n);
//   cout<<"Enter the vector element:";
//   for(int i=0;i<n;i++){
//     cin>>v[i];
//   }

//   QuickSort(v,0,n-1);
//   cout<<"The sorted array is: \n";
//   for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
//   }
// }  



//  count sort algo 


// #include<iostream>
// #include<vector>
// using namespace std;
// int getmax(vector<int>&v){
//     int n=v.size();
//     int max=v[0];
//     for(int i=1;i<n;i++){
//       if(max<v[i]) max=v[i];
//     }
//     return max;
// }

// void countSort(vector<int>&v){
//   int n=v.size();
//   int maxnum=getmax(v);
//   vector<int>count(maxnum+1,0);
//   vector<int>b(n);


//   // frequency array 
//   for(int i=0;i<n;i++){
//     count[v[i]]++;
//   }

//   // actual positiion of array calculate
//   for(int i=1;i<=maxnum;i++){
//     count[i]=count[i]+count[i-1];
//   }
// // sorted the array where the actual position of element
//   for(int i=n-1;i>=0;i--){
//     b[--count[v[i]]] = v[i];
//   }

//   for(int i=0;i<n;i++){
//     v[i]=b[i];
//   }

// }

// int main(){
//   int n;
//   cout<<"Enter the size of array:";
//   cin>>n;
//   vector<int>v(n);
//   cout<<"Enter the vector element:";
//   for(int i=0;i<n;i++){
//     cin>>v[i];
//   }

//   countSort(v);
//   cout<<"The sorted array is:";
//   for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
//   }

// }


// radix sort

#include<iostream>
#include<vector>
using namespace std;
int getmax(vector<int>&v){
  int n=v.size();
  int max=v[0];
  for(int i=1;i<n;i++){
    if(max<v[i]) max=v[i];
  }
  return max;
}

void countSort(vector<int>&v,int pos){
  int n=v.size();
   vector<int>count(10,0);// ye ek fequency arrayy bna h,10 yah bata h ki number min digit min 0 to 9
   vector<int>b(n) ;

  // all element ka bit ke anusar se frequency calculate karna h

  for(int i=0;i<n;i++){
    count[(v[i]/pos)%10]++;
  }
  // cmuulative yani modified frquency

  for(int i=1;i<10;i++){
    count[i]+=count[i-1];
  }
  for(int i=n-1;i>=0;i--){
      b[--count[(v[i]/pos)%10]] = v[i];

  }

  for(int i=0;i<n;i++){
    v[i]=b[i];
  }


}

void radixSort(vector<int>&v){
  int n=v.size();
    int maxnum=getmax(v);
  //kitna bar count sort call hoga
    for(int pos= 1; maxnum/pos >0; pos=pos*10){
      countSort(v,pos);
    }
}

int main(){
  int n;
  cout<<"Enter the size of array:";
  cin>>n;
  vector<int>v(n);
  cout<<"Enter the vector element:";
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  radixSort(v);
  cout<<"The vector element:";
  for(int i=0;i<n;i++){
   cout<<v[i]<<" ";
  }
}