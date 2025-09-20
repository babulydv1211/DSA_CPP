#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
      this->val=val;
      this->next=NULL;
    }
};

void display(Node* head){
    if(head==NULL) return ;
    cout<<head->val<<" "; // kaam
    display(head->next);// call
    //Note->pehle call lag gya then kaam hua to print reverse min aayega
    //2> pehle kaam then call to sahi order min aayega print hokar
}

//reverse order
void reverseDisplay(Node* head){
  if(head==NULL) return ;
  reverseDisplay(head->next); // call laga
  cout<<head->val<<" "; //kaam

}

int main(){
    Node* a = new Node(4);
    Node* b = new Node(5);
    Node* c= new Node(6);
    Node* d= new Node(7);
    a->next=b;
    b->next=c;
    c->next=d;
    cout<<"original order print"<<endl;
    display(a);
    cout<<endl;
    cout<<"reverse order print:"<<endl;
    reverseDisplay(a);

}