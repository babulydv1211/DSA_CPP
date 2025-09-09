// #include<iostream>
// using namespace std;
// int main(){
//     string x="hello my dear friend:";
//     cout<<x ;
// }

//Q.to take input string;
// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter the string:";
//     cin>>s;
//     cout<<s;
// }

//Note->ye jo input lene ka trika h wo space ke bad wala chez  ko read nhi krta;
//best tarika input lene ka
// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cout<<"Enter the string:";
//     getline(cin,s);
//     cout<<s;
// }


//indexing of a string;
// #include<iostream>
// using namespace std;
// int main(){
//     string s="Babul yadav";
//     cout<<s[0]<<endl;
//     s[0] = 'R';
//     s[2] = 'h';
//     cout<<s<<endl;
//     //to calculate the size of string;
//     cout<<s.size();
// }

//Q.To calculate vowel in a string
// #include<iostream>
// using namespace std;
// int main(){
//     int count=0;
//     string s="hello my dear friend";
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
//             count++;
//         }
//     }
//     cout<<"The total vowel in a string is:"<<count;
// }

//Q.Reverse of a string;
// #include<iostream>
// #include<string>
// #include <algorithm>
// using namespace std;
// int main(){
//     string s="Hello smvdu";
//     cout<<s<<endl;
//     //reverse of string
//     reverse(s.begin(),s.end());
//     cout<<s<<endl;

// }


// //Q.Number ko string print karana h to
// #include<iostream>
// #include<string>

// using namespace std;
// int main(){
//     int x=24567;
//     string s=to_string(x);
//     cout<<s<<endl;
//     cout<<s+"dd";
// }

//Note ->>>> to_string inbuilt functiom to convert number to string

// //Q.wap to count the digit using to_string
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int x=234566;
//     string s=to_string(x);
//     cout<<s.length();
// }


#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3-i;j++){
            cout<<" "<<" ";
        }
        for(int k=0;k<4;k++){
          cout<<"#"<<" ";
       }
     cout<<endl;
        
    }

    


    
}