#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector <int> v = {10,20,30,40,50};

    int pos = 3;
    int value = 28;

    v.insert(v.begin() + pos , value);

    for(int x : v)
    {
        cout << x << " ";
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int A[100], n;
    int maxCount = 0, element;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (A[i] == A[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            element = A[i];
        }
    }

    cout << "Maximum frequency element: " << element << endl;
    cout << "Frequency: " << maxCount << endl;

    return 0;
}
