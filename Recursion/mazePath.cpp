// #include<iostream>
// using namespace std;
// int maze(int sr,int sc,int er,int ec){
//     if(sc>er || sc>ec) return 0;
//     if(sr==er || sc==ec) return 1;
//     int rightways=maze(sr,sc+1,er,ec);
//     int downways=maze( sr+1,sc,er,ec);
//     int totalways= rightways+downways;
//     return totalways;
         
// }

// int main(){
//   int y=  maze(1,1,4,4);
//   cout<<"The total number of ways in maze path is:"<<y;
// }


// agar path bhi print krna ho to 
#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sc>er || sc>ec) return 0;
    if(sr==er || sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze( sr+1,sc,er,ec);
    int totalways= rightways+downways;
    return totalways;
         
}

void pathprint(int sr,int sc,int er,int ec,string s){
    if(sc>er || sc>ec) return ;
    if(sr==er || sc==ec) {
        cout<<s<<endl;
        return;
    }
    pathprint(sr,sc+1,er,ec,s+'R'); //right
    pathprint( sr+1,sc,er,ec,s+'D'); //down
    
}

int main(){
   pathprint(1,1,3,3,"");

}
