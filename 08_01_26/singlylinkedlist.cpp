/* Singly Linked List Structure */

#include <iostream>

using namespace std;

class Node{
  public:
  int data;
  Node* next;


  Node(int val){
    data = val;
    next = NULL;
  }
};


// Insert at the Tail/End

void insert(Node* &head , int val){
  Node* newNode = new Node(val);

  if(head == NULL){
    head = newNode;
    return;
  }

  Node* temp = head;

  while(temp->next != NULL){
    temp = temp->next;
  }

  temp->next = newNode;
}

// display list

void show(Node* head){
  while(head != NULL){
    cout << head->data << "->";
    head = head->next;
  }

  cout<<"NULL";
}

// Update Linked List

void update(Node* head , int oldValue , int newValue){
  Node* temp = head;

  while(temp != NULL){
    if(temp->data == oldValue){
      temp->data = newValue;
      cout << "Value Updated\n";
      return;
    }
    temp = temp->next;
  }

  cout << "Value not found\n";
}

// delete Value

void deleteNode(Node* head , int val){

  if(head == NULL){
    cout << "List is Empty!";
  }

  if(head->data == val){
    Node* del = head;

    head = head->next;

    delete del;

    cout << "Node Deleted\n";
  }

  Node* temp = head;

  while(temp->next != NULL && temp->next->data != val){
    temp = temp -> next;
  }

  if(temp->next == NULL){
    cout << "Value not found";
    return;
  }

  Node* del = temp->next;
  temp->next = temp->next->next;
  delete del;
}

// main

int main(){
  Node* head = NULL;

  insert(head , 10);
  insert(head , 20);
  insert(head , 30);
  insert(head , 40);
  insert(head , 50);

  update(head , 40 , 60);

  deleteNode(head , 10);

  cout << "Linked List : " ;
  show(head);

  return 0;
}