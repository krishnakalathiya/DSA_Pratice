// C++ Program to find Leaders in an array

// An Element is called a leader if it is greater than all element to its left.


#include <iostream>

using namespace std;

int main(){

  int arr[] = {1 , 18 , 16 , 17 , 4 , 3 , 5 , 2 , 19};

  int n = 9;

  int maxLeft = arr[0];

  cout << "Leaders the array: ";
  cout << maxLeft << " ";

  for(int i = 1; i < n; i++){
    if(arr[i] > maxLeft){
      maxLeft = arr[i];
      cout << maxLeft << " ";
    }
  }


  return 0;
}