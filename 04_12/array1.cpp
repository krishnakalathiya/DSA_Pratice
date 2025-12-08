#include <iostream>

using namespace std;

int main(){

  // Find the average of all positive numbers

  int arr[] = {-5 , -3 , 0 , 2 , 7 , -1 , 4};

  int size = sizeof(arr) / sizeof(arr[0]);

  int positiveCount = 0;

  for (int i = 0; i < size; i++){
    if(arr[i] > 0){
      positiveCount++;
    }
  }

  int avg = positiveCount / 3;

  cout << "Number of Positive average value:" << avg << endl;
  
  return 0;
}