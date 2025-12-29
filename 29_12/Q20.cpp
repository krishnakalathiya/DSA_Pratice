//Write a C++ program to find the longest increasing subsequence in an array

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

    int lis[n];
    for (int i = 0; i < n; i++) {
        lis[i] = 1; 
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
    }

    int maxLIS = 0;
    for (int i = 0; i < n; i++) {
        if (lis[i] > maxLIS) {
            maxLIS = lis[i];
        }
    }

    cout << "Length of Longest Increasing Subsequence is: " << maxLIS << endl;

    return 0;
}