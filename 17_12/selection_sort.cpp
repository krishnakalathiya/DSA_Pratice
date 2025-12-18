#include <iostream>
using namespace std;

int main(){

  int arr[] = {45 , 78 , 23 , 65 , 11 , 2};
  int n = 6;

  for(int i = 0; i < n - 1; i++){
    int indexMin = i;

    for(int j = i + 1; j < n; j++){
      if(arr[j] < arr[indexMin]){
        indexMin = j;
      }
    }

    swap(arr[i] , arr[indexMin]);
  }

  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }

  return 0;
}