//Write a C++ program to delete an element from a specific position in an array

#include <iostream>
using namespace std;

int main() {
    int n, pos;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array is empty!";
        return 0;
    }

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter position to delete (0 to " << n-1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position!";
        return 0;
    }

    // Shift elements to the left
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 

    cout << "Array after deletion:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}