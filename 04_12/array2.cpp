#include <iostream>

using namespace std;

int main(){
  
  // Find the sum of all even number

  int arr[] = {1,  2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};

  int size = sizeof(arr) / sizeof(arr[0]);
  int sum = 0;

  for (int i = 0; i < size; i++){
    if(arr[i] % 2 == 0)
    {
        sum = sum + arr[i];
    }
  }

  cout << "sum of even value:"<< sum << endl;

  return 0;


}