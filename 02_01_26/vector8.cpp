#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v = {100 , 200 , 300 , 400};
    cout << "Original vector: ";
    for(int x : v){
        cout << x << " ";
    }
    
    reverse(v.begin(), v.end());
    
    cout << "\nAfter reversing the vector: ";
    for(int x : v){
        cout << x << " ";
    }
    
    return 0;
}