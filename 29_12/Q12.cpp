//Write a C++ program to insert an element at a specific position in an array

#include <iostream>
using namespace std;

int main() {
    int n, pos, element;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n + 1];
    
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter position to insert (0 to " << n << "): ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!";
        return 0;
    }

    cout << "Enter element to insert: ";
    cin >> element;

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++; 

    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}