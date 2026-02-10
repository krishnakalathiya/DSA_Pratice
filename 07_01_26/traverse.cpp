// What is Linked List Traverse?

#include <iostream>

using namespace std;

// Node

class Node {
  public:
    int data;
    Node* next;

    Node(int val){
      data = val;
      next = NULL;
    }
};

// Traverse

void traverseF(Node* head){

  Node* temp = head;

  while(temp != NULL){
    cout << temp->data << "->";
    temp = temp->next;
  }

  cout << "NULL";
}

int main(){

  Node* head = new Node(10);
  head->next = new Node(20);

  traverseF(head);

  return 0;
}