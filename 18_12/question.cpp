 //1. Program to access an element at a given index.
 //2. Program to insert an element at a specific position in an array.
 //3. Program to delete an element from a specific position in an array.
 //4. Program to update an element at a given index in an array.
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, index, value, pos;

    // Input array
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 1. Access element at given index
    cout << "\n1. Access element at a given index\n";
    cout << "Enter index: ";
    cin >> index;

    if (index >= 0 && index < n)
    {
       cout << "Element at index " << index << " is " << arr[index] << endl;
    }else
    {
       cout << "Invalid index\n";
    }

    // 2. Insert element at specific position
    cout << "\n2. Insert element at a specific position\n";
    cout << "Enter position (0 to " << n << "): ";
    cin >> pos;

    cout << "Enter value: ";
    cin >> value;

    if (pos >= 0 && pos <= n) {
        for (int i = n; i > pos; i--)
        {
            arr[i] = arr[i - 1];
            arr[pos] = value;
        }

        n++;
        cout << "Array after insertion: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
            cout << endl;
        }
    } else {
        cout << "Invalid position\n";
    }

    // 3. Delete element from specific position
    cout << "\n3. Delete element from a specific position\n";
    cout << "Enter position (0 to " << n - 1 << "): ";
    cin >> pos;

    if (pos >= 0 && pos < n) {
        for (int i = pos; i < n - 1; i++)
        {    
            arr[i] = arr[i + 1];
        }
            
        n--;
        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
            cout << endl;
        }
    } else {
        cout << "Invalid position\n";
    }

    // 4. Update element at given index
    cout << "\n4. Update element at a given index\n";
    cout << "Enter index: ";
    cin >> index;
    cout << "Enter new value: ";
    cin >> value;

    if (index >= 0 && index < n) {
        arr[index] = value;

        cout << "Array after update: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
            cout << endl;
        }
    } else {
        cout << "Invalid index\n";
    }

    return 0;
}
