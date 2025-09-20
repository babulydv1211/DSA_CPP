#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    // create constructor
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

int main(){
  //yaha value set kiya h
    // Node a,b,c,d;
    // a.val=10;
    // b.val=20;
    // c.val=30;
    // d.val=40;
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
     
    //forming linklist
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;

    // cout<<b.val<<endl;
    // cout<<(*(b.next)).val<<endl;
    //ya
    // cout<<b.next->val;
    // a se d ki balue ko print

    // cout<<(((a.next)->next))->next->val;

    //print linklist
    Node temp= a;
    while(9){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
    
}