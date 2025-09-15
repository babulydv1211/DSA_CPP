#include<iostream>
using namespace std;

class Cricketer{
    public:
    char name;
    int age;
    int noOfmatch;
    int avgScore;
};

int main(){
   Cricketer virat;
   virat.name='V';
   virat.age=60;
   virat.noOfmatch=500;
   virat.avgScore=200;

   Cricketer dhoni;
   dhoni.name='D';
   dhoni.age=70;
   dhoni.noOfmatch=100;
   dhoni.avgScore=100;

    Cricketer cricketers[2]={virat,dhoni};

    for(int i=0;i<2;i++){
        cout<<cricketers[i].name<<endl;
       cout<<cricketers[i].age<<endl;
       cout<<cricketers[i].noOfmatch<<endl;
       cout<<cricketers[i].avgScore<<endl;
    }
   
}
