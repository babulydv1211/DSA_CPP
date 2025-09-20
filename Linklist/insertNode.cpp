#include<iostream>
using namespace std;

class Node{ //user define datatype
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList { //user define data structure
    public:
    Node* head;
    Node* tail;
    int size;
    //constructor
    LinkedList(){
        head=NULL;
        tail=NULL;
        size=0;

    }

    //nsert fn at end;
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else {
           tail->next=temp;
           tail=temp;
        }
        size++;

    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
          cout<<temp->val<<" ";
          temp=temp->next;
        }
        cout<<endl;
       
    }
};

int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
     ll.display();
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();
    cout<<ll.size;

}