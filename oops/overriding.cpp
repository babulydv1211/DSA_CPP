#include<iostream>
using namespace std;
class A{
    public:
    int age;
    int id;
    string name;
    double salary;

    void show(){
        cout<<"This is regular employee";
    }
};

class B:public A{

    int noOfManagerRole;
    public:
    void show(){
        cout<<"employee work under manager";
    }
};


int main(){
    B amit;
  amit.show();

}