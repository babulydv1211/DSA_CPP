//wap to print the fctorial of a number
// #include<iostream>
// using namespace std;
// int main(){
//     int n, pro=1;
//     cout<<"Enter the number";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         pro=pro*i;
//     }
//     cout<<"The factorial of a give number"<<pro;
// }
//wap to print the ASCII value of give char
#include<iostream>
using namespace std;

int main() {
    for (int i = 65; i <= 90; i++) {
        cout << char(i) << " ";  // Adds a space between each letter
    }
    cout << endl;  // Adds a newline at the end for clean output
    return 0;
}
