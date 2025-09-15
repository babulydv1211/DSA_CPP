// #include<iostream>
// using namespace std;

// class Bike{
//     public:
//     int modelNo;
//     int typeSize;
//     string color;
//     bool inEngineOn;
    
//     //default constructor
//     Bike(){
//         cout<<"constructor call "<<endl;
//     }

// };

// int main(){
//     Bike hunter;
//     Bike honda;
// }


// constructor with parameter

#include<iostream>
using namespace std;

class Bike{
    public:
    int tyreSize;
    int modelNo;

    Bike(int tyreSize,int modelNo){
        this->tyreSize=tyreSize;
        this->modelNo=modelNo;
        cout<<" call constructor"<<endl;
    }
};

int main(){
    Bike tvs(10,201);
    Bike honda(12,202);
    cout<<tvs.tyreSize<<" "<< tvs.modelNo<<endl;
    cout<<honda.tyreSize<<" "<< honda.modelNo<<endl;

    //note pehle constuctor call hoga jaise object create hua,dono object then value parameter jyega one by one

     
}