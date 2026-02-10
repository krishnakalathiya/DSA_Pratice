// C++ Program to find Leaders in an array

// An Element is called a leader if it is greater than all element to its right.

#include <iostream>

using namespace std;

int main(){

  int arr[] = {1 , 18 , 16 , 17 , 4 , 3 , 5 , 2};

//<<<<<<< HEAD
  int n = 6;
  
// =======
//   int n = 8;

  int maxRight = arr[n - 1];

  cout << "leaders the array: ";
  cout << maxRight << " ";

  for(int i = n - 2; i >= 0; i--){
    if(arr[i] > maxRight){
      maxRight = arr[i];
      cout << maxRight << " ";
    }
  }


// >>>>>>> 3563e93ec19d2e6483c5e1e7f7fb9482143dcca2
  return 0;
}