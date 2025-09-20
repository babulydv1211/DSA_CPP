#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val= val;
        this->next=NULL;
    }
};

class LinkLiist{
    public:
    Node* head;
    Node* tail;
    int size;
  LinkLiist(){
    head=NULL;
    tail=NULL;
    size=0;
  }

  //insert at Begning
  void insertAtBegning(int val){
    Node* temp= new Node(val);
    if(size==0) head=tail=temp;
    else{
      temp->next=head;
      head=temp;

    }
    size++;
  }
  
  //insert at End
  void insertAtEnd(int val){
      Node* temp = new Node(val);
        if(size==0) head=tail=temp;
        else {
           tail->next=temp;
           tail=temp;
        }
        size++;
  }

  // insert at index
 void insertAtIdx(int idx,int val){
    if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
    else if(idx==0) insertAtBegning(val);
    else if(idx==size) insertAtEnd(val);

    else{
        Node* t= new Node(val);
        Node* temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        size++;
        
    }

 };

 // get element in Linklist
 int getElementAtIdx(int idx){
    if(idx<0 || idx>=size){
     cout<<"invalid element" ;
     return -1;
    } 
    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else{
        Node* temp=head;
        for(int i=0;i<idx;i++){
            temp=temp->next;
        }
      return temp->val;
    }
    
 }

 // delete at head
 void deletAthead(){
    if(size==0) {
        cout<<"List is empty";
        return;
    }
    else{
        head=head->next;
        size--;
    }
 }
 // delet at tail
 void deletatTail(){
    Node* temp= head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;
 }
 //delete at index
 void deletAtidx(int idx){
    if(size==0){
        cout<<"list is empty";
        return;
    }
    if(idx<0 || idx>=size) cout<<"Invalid index";
    else if(idx==0) return deletAthead();
    else if(idx==size-1) return deletatTail();
    else{
      Node* temp=head;
      for(int i=0;i<idx-1;i++){
        temp=temp->next;
      }
      temp->next=temp->next->next;
      size--;
    }


 }
  void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
  }


};

int main(){
    LinkLiist ll;
    ll.insertAtBegning(10);
    ll.insertAtBegning(5);
    ll.insertAtBegning(4);
    ll.insertAtBegning(3);
    ll.insertAtBegning(1); 
    ll.insertAtEnd(20);
    ll.display();
    cout<<endl;
    ll.insertAtIdx(2,9);
    ll.display();
    cout<<endl;
    cout<<ll.getElementAtIdx(3);
    cout<<endl;
    ll.display();
    cout<<endl;
    ll.deletAthead();
    ll.display();
    cout<<endl;
    ll.deletatTail();
    ll.display();
    cout<<endl;
    ll.deletAtidx(1);
    ll.display();

    
}