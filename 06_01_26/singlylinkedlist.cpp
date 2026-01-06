#include<iostream>

using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insert(node* &head, int val){
    node* newnode = new node(val);

    if(head == NULL)
    {
        head = newnode;
        return;
    }

    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newnode;
}

void display(node* head){
    while(head != NULL){
        cout << head->data << "->";
        head = head->next;
    }
}

int main()
{
    node* head = NULL;

    insert(head, 10);
    insert(head, 20);

    display(head);
    return 0;
}