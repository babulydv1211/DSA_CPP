// #include<iostream>
// using namespace std;
// void print(){
//     int b=10;
//     cout<<b<<endl;
//     b++;
// }

// int main(){
//     print();
//     print();
//     print();
// }

//static declaer krne ke bad
// #include<iostream>
// using namespace std;
// void print(){
//     static int b=10;
//     cout<<b<<endl;
//     b++;
// }

// int main(){
//     print();
//     print();
//     print();
// }
#include<iostream>
using namespace std;
class Bike{
    public:
    static int noOfBikes;
    int tyreSize;
    int engineSize;
    
    //constructor
    Bike(int tyreSize,int engineSize){
        this->engineSize=engineSize;
        this->tyreSize=tyreSize;
    }
    
    static void increaseNoOfBikes(){
        noOfBikes++;
    }
    

};
int Bike::noOfBikes=10;

int main(){
    Bike tvs(10,20);
    Bike honda(20 ,30);
   
    tvs.increaseNoOfBikes();
    cout<<tvs.noOfBikes<<endl;
    cout<<honda.noOfBikes<<endl;

    honda.increaseNoOfBikes();
    cout<<tvs.noOfBikes<<endl;
    cout<<honda.noOfBikes<<endl;
    
    cout<<tvs.engineSize<<" "<<tvs.tyreSize<<endl;
    cout<<honda.engineSize<<" "<<honda.tyreSize;
}