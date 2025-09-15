#include<iostream>
using namespace std;

class student{
    public:
     int  id;
     int age;

     void showId(){
        cout<<"id is:"<<id<<endl;;
     }
};


class calculator{
    public:
    int a;
    int b;
    
    void add(){
        cout<<a+b<<endl;
    }
    void sub(){
        cout<<a-b;
    }
};

int main(){
    student amit;
    amit.id=4;
    // amit.name="name";
    // amit.age=20;
//   cout<<amit.id<<endl;
//   cout<<amit.age<<endl;

 amit.showId();


 calculator calci;
  calci.a=10;
  calci.b=2;
  calci.add();
  calci.sub();
}


