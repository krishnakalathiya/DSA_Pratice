//Write a C++ program to find the missing number in an array of 1 to N

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N (size of complete array): ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter " << n - 1 << " elements (numbers from 1 to " << n << "):\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    // Method 1: Using sum formula
    int totalSum = n * (n + 1) / 2;
    int arrSum = 0;
    for (int i = 0; i < n - 1; i++) {
        arrSum += arr[i];
    }

    int missingNumber = totalSum - arrSum;
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}