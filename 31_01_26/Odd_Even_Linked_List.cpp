//Odd Even Linked List
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    int n, value;
    Node *head = NULL, *tail = NULL;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;

        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Odd-Even rearrangement (IN-PLACE)
    if (head != NULL && head->next != NULL) {
        Node* odd = head;
        Node* even = head->next;
        Node* evenHead = even;

        while (even != NULL && even->next != NULL) {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;
    }

    // Display result
    cout << "Reordered list: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}