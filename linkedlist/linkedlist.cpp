#include <iostream>
using namespace std;

class Node{
public:
      int value;
      Node* Next;

};
 
 void printlist(Node* n){
    while(n!=NULL){
        cout << n->value << endl;
        n = n->Next;
    }
 }
 void  inserteAtFront(Node** head , int newValue){
    //1. prepare new node
          Node* newNode = new Node();
        newNode->value = newValue;
    // 2. put it in front of current head
    newNode->Next = *head;
    // 3.move head of the list to point the new
    *head = newNode;
 }
void insertAtTheEnd(Node** head , int newValue){
    //1.prepare a newNode
    Node* newNode = new Node();
    newNode->value = newValue;
    //2. if linked list is empty, newNode will be a head node
    if(*head == NULL){
        *head = newNode ;
        return;
    }
    //3. find the last Node
    Node* last = *head;
    while(last->Next != NULL){
        last= last->Next;
    }
    //4. Insert newNode after the last node (at the node)
    last->Next = newNode;
}
void insertAfter(Node* previous, int newValue){
    //1. check if previous Node is Null
    if(previous == NULL){
        cout << "Previous can not be NULL";
        return;
    }
    //2. prepare a newNode
    Node* newNode = new Node();
    newNode->value = newValue;
    //3. Insert newNode after previous
    newNode->Next = previous->Next;
    previous->Next =newNode;
}

int main(){
         Node* head = new Node();
         Node* second  = new Node();
         Node* third = new Node();

          head->value = 1;
          head->Next =  second;
          second->value = 2;
          second->Next = third;
          third->value = 3;
          third->Next = NULL;
        
    
        printlist(head); 


    cin.get();
}