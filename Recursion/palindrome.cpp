// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// using namespace std;
// void palindrome(string str){
//     string rev=str;
//     reverse(str.begin(),str.end());
//     if(str==rev){
//         cout<<"palindrome";
//     }
//     else{
//         cout<<"not palindrome";
//     }
// }

// int main(){
//     string str="aba";
//     palindrome(str);
// }


//using recursion

#include<iostream>
#include<string>
using namespace std;
bool palindrome(string s,int i,int j){
   if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return palindrome(s,i+1,j-1);
}

int main(){
    string s="abcdc";
 cout<<  palindrome(s,0,s.length()-1);
}