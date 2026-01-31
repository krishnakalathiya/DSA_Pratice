//palindrome linked list

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *tail = NULL;
    int n, val;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Find middle of linked list
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    Node *prev = NULL, *curr = slow, *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // Compare both halves
    Node *first = head;
    Node *second = prev;
    bool palindrome = true;

    while (second != NULL) {
        if (first->data != second->data) {
            palindrome = false;
            break;
        }
        first = first->next;
        second = second->next;
    }

    if (palindrome)
        cout << "Linked List is Palindrome";
    else
        cout << "Linked List is NOT Palindrome";

    return 0;
}