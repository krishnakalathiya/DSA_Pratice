// Closest number of array

// arr = {4 , 7 , 10 , 12 , 18}
// target = 11

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

  int arr[] = {4 , 7 , 10 , 12 , 18};

  int n = sizeof(arr) / sizeof(arr[0]);

  int target = 6;

  int closest = arr[0];

  int minDiff = abs(arr[0] - target);

  for(int i = 1; i < n; i++){
    int diff = abs(arr[i] - target);

    if(diff < minDiff){
      minDiff = diff;
      closest = arr[i];
    }
  }

  cout << "closest: " << closest << endl;

  return 0;
}