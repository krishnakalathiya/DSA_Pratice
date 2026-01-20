#include <iostream>

using namespace std;

#define SIZE 5

class Queue{
  int arr[SIZE];
  int front , rear;

  public:
    Queue(){
      front = -1; // 0
      rear = -1; // -1
    }

  // insert

  void enqueue(int val){

    if(rear == SIZE - 1){
      cout << "Queue is full\n";
    }

    if(front == -1){
      front = 0;
    }

    rear++;

    arr[rear] = val;

    cout << val << "insert\n";

  }

  // delete

  void dequeue(){
    if(front == -1 || front > rear){
      cout << "Queue is Empty\n";
      return;
    }

    cout << arr[front] << "removed\n";
  }
  
};