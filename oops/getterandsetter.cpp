// #include<iostream>
// using namespace std;

// class player{
//     private:
//     int score;
//     int health;

//     public:
//     void setScore(int s){
//         score=s;
//     }
//     void setHealth(int h){
//         health=h;
//     }
//     int getScore(){
//         return score;
//     }
//     int getHealth(){
//         return health;
//     }

// };

// int main(){
//    player vk;
//    vk.setScore(100);
//    vk.setHealth(20);
//   cout<< vk.getScore();
//   cout<<endl;
//   cout<< vk.getHealth();
// }


//create a class book

// #include<iostream>
// using namespace std;

// class Book{
//     public:
//     char name;
//     double price;
//     int pages;

//     int countBook(int p){
//         if(price<p){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }

//     bool isBookPresent(char book){
//     if(name==book) return true;
//     else return false;
//     }
// };

// int main(){
//     Book b;
//     b.name='C';
//     b.price=100;
//     b.pages=200;
//     cout<<b.countBook(200)<<endl;
//     cout<<b.isBookPresent('C');

// }

#include<iostream>
using namespace std;
class player{
    private:
    int health;
    int age;
    int score;
    bool alive;
   
    public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool getIsalive(){
        return alive;
    }

    void setHealth(int health){
        health=health; 
        // es trah likhne se confussion hota h kiska health h
        player::health=health;
         //::ye scope resloution opreater h ye bata h health jo h wah player ka h usme helth ek arg aaya h
         this->health=health; //this ek key word h jo repersemt h es class ka
    }
    void setAge(int age){
        this->age=age;
    }
    void setScore(int score){
        this->score =score;
    }
    void setIsalive(bool alive){
        this->alive=alive;
    }

   
};
 // yha function min object bhi apss kr skte h
    int addScore(player a,player b){
        return a.getScore()+ b.getScore();
    }




int main(){

    //uper min class bna kiya h scalaten but usko memory assign nhi hua h
    //memory assign tab hoga jab object bnagega
    player tk; // ye object create hua h, static allocate memory
    tk.setAge(17);
    tk.setScore(204);
    tk.setHealth(80);
    tk.setIsalive(true);

    player hk; //ye static memory allocate h
    player *urvi = new  player; //ye run time per object bna h urvi name ka
    hk.setAge(13);
    hk.setScore(104);
    hk.setHealth(30);
    hk.setIsalive(true);
    // object ka array bhi bna skte h
    player players[2]={tk,hk};
    cout<<players[0].getAge();

    
    cout<<addScore(tk,hk);
}