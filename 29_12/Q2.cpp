//Write a C++ program to find the second smallest element in an array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Second smallest element not possible.";
        return 0;
    }

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort (Ascending Order)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Find second smallest (different from smallest)
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            cout << "Second smallest element is: " << arr[i];
            return 0;
        }
    }

    cout << "No second smallest element.";

    return 0;
}