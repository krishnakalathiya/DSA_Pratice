#include <iostream>
using namespace std;

void reverse(int arr[] , int start , int end){
  while(start < end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
  }
}

int main(){

  int arr[] = {1 , 2 , 3 , 4 , 5};
  int n = 5;
  int k = 3;

  k = k % n; 

  // first step

  reverse(arr , 0 , k - 1);

  // second step

  reverse(arr , k , n - 1);

  // third step

  reverse(arr , 0 , n - 1);

  cout << "Array After Rotation: ";
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }

  return 0;
}