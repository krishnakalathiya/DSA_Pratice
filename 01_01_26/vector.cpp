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