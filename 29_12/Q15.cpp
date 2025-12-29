//Write a C++ program to find the pair of elements whose sum is equal to a given number

#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the sum to find: ";
    cin >> sum;

    cout << "Pairs with sum " << sum << " are:\n";
    bool found = false;

    // Check all pairs
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "(" << arr[i] << ", " << arr[j] << ")\n";
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No pairs found.\n";
    }

    return 0;
}