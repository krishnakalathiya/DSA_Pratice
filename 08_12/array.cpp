//C++ Program to Perform sum, Average in given elements of Array
#include<iostream>
using namespace std;
int main(){
    int n, average;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    average = sum / 5;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}