// #include<iostream>
// using namespace std;

// class vehicle{
//     public:
//     int tyreSize;
//     int modelno;
//     int engineSize;
//     int lights;

// };

// class Bike:public vehicle{
//     public:
//     int handleSize;
// };

// //inherit vehicle ko car class
// class car:public vehicle{
//     public:
//     int steeringSize;
// };


// int main(){
//    Bike honda ;// create object;
//    honda.handleSize=10;
//    honda.engineSize=70;
//    honda.lights=4;

//     car suv;
//     suv.engineSize=330;
//     suv.modelno=101;
//     suv.lights=10;
 //   cout<< suv.lights<<endl;
// }




#include<iostream>
using namespace std;

class A {
    private:
      int a_ka_private; //isko class ke bahar excess nhi kr skte h,canot inherite
    protected:
       int a_ka_protected; // isko bhi class ke bahar not excess,can inherite,
    public:
       int a_ka_public; //this can be excess from outside,can inherite

};

//inheriate
// class b:<acccess_modifire>A yha public likhe h to a jo aayega wah public hoga ,but
// jo private tha a min wah private hi rhega also protact bhi protect hi rhega 
// but ja protact use to
// protact jo a ka tha wah -> b min bhi protact,A ka public-> ab b min protect bn jyega
//now jab private use to
// private jo tha A  ka-> wah b min bhi priavte,also jo A min public and protact tha wah B main aakr->protect ho jata h  

class B:A{
    
    public:
       int b_ka_public;

    void show(){
        // yha ka protect and public hi excess hoga not private
    }

};

class B: private A{
    
    public:
       int b_ka_public;

    void show(){
        // yha ka protect and public hi excess hoga not private
    }

};

int main(){
    A a; //object A ka create kiye h
    a.a_ka_public=10;

    B b; //object b
   // b.a_ka_public yha ab A ka koi excess nhi kr skte all are priavte A ka

}