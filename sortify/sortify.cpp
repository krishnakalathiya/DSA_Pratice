#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    /* ---------------- Mission 1: Remove Duplicates ---------------- */
    cout << "\n1) Unique elements: ";
    for(int i = 0; i < n; i++) {
        bool duplicate = false;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }
        if(!duplicate)
            cout << arr[i] << " ";
    }

    /* ---------------- Mission 2: Largest Element ---------------- */
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
    }
    cout << "\n\n2) Largest element: " << largest;

    /* ---------------- Mission 3: Ascending & Descending Sort ---------------- */
    int temp, sortArr[100];
    for(int i = 0; i < n; i++)
        sortArr[i] = arr[i];

    // Bubble sort ascending
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(sortArr[j] > sortArr[j + 1]) {
                temp = sortArr[j];
                sortArr[j] = sortArr[j + 1];
                sortArr[j + 1] = temp;
            }
        }
    }

    cout << "\n\n3) Ascending order: ";
    for(int i = 0; i < n; i++)
        cout << sortArr[i] << " ";

    cout << "\n   Descending order: ";
    for(int i = n - 1; i >= 0; i--)
        cout << sortArr[i] << " ";

    /* ---------------- Mission 4: Count Positive & Negative ---------------- */
    int pos = 0, neg = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
    }

    cout << "\n\n4) Positive count: " << pos;
    cout << "\n   Negative count: " << neg;

    /* ---------------- Mission 5: Even Asc & Odd Desc ---------------- */
    int even[100], odd[100];
    int e = 0, o = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    // Sort even ascending
    for(int i = 0; i < e - 1; i++) {
        for(int j = 0; j < e - i - 1; j++) {
            if(even[j] > even[j + 1]) {
                temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }

    // Sort odd descending
    for(int i = 0; i < o - 1; i++) {
        for(int j = 0; j < o - i - 1; j++) {
            if(odd[j] < odd[j + 1]) {
                temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }

    cout << "\n\n5) Even Asc + Odd Desc: ";
    for(int i = 0; i < e; i++)
        cout << even[i] << " ";
    for(int i = 0; i < o; i++)
        cout << odd[i] << " ";

    return 0;
}