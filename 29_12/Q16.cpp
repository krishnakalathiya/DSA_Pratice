//Write a C++ program to separate even and odd elements in an array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int even[n], odd[n];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    cout << "Even elements:\n";
    for (int i = 0; i < evenCount; i++) {
        cout << even[i] << " ";
    }

    cout << "\nOdd elements:\n";
    for (int i = 0; i < oddCount; i++) {
        cout << odd[i] << " ";
    }

    return 0;
}