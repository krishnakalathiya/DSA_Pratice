#include <iostream>
using namespace std;

/* Node Class */
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = NULL;
    }
};

/* Linked List Class (Base Class) */
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = NULL;
    }

    /* Append at end */
    void append(int data) {
        Node* newNode = new Node(data);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    /* Insert at beginning */
    void insert_at_beginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    /* Search element */
    void search(int key) {
        Node* temp = head;
        int position = 1;

        while (temp != NULL) {
            if (temp->data == key) {
                cout << "Element " << key << " found at position " << position << endl;
                return;
            }
            temp = temp->next;
            position++;
        }
        cout << "Element not found" << endl;
    }

    /* Delete node by value */
    void delete_node(int key) {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Node deleted" << endl;
            return;
        }

        Node* current = head;
        while (current->next != NULL && current->next->data != key)
            current = current->next;

        if (current->next == NULL) {
            cout << "Element not found" << endl;
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
        cout << "Node deleted" << endl;
    }

    /* Reverse Linked List */
    void reverse() {
        Node* prev = NULL;
        Node* current = head;
        Node* nextNode = NULL;

        while (current != NULL) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;
        cout << "Linked List reversed" << endl;
    }

    /* Display Linked List */
    void display() {
        Node* temp = head;
        if (temp == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

/* Main Function */
int main() {
    LinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);

    cout << "Initial List: ";
    list.display();

    list.insert_at_beginning(5);
    cout << "After Insert at Beginning: ";
    list.display();

    list.search(20);

    list.delete_node(10);
    cout << "After Deletion: ";
    list.display();

    list.reverse();
    cout << "After Reversing: ";
    list.display();

    return 0;
}