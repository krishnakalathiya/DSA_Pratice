#include <iostream>

using namespace std;

// function to reverse array from start to end

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

  int k = 2;

  k = k % n;

  // step 1

  reverse(arr , 0 , n - 1);

  // step 2

  reverse(arr , 0 , k - 1);

  // step 3

  reverse(arr , k , n - 1);

  cout << "Reveres Array from right:\n";

  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }


  return 0;
}