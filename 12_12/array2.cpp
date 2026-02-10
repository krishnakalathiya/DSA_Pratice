#include <iostream>

using namespace std;

int main(){

  int arr[] = {1 , 2 , 3 , 4};

  int n = 4;

  cout << "Number Pattern from Array:\n";

  for(int i = n; i >= 1; i--){
    for(int j = 0; j < i; j++){
      cout << arr[j] << " ";
    }
    cout << endl;
  }

  return 0;
}