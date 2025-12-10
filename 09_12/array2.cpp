#include <iostream>
using namespace std;

int main(){

  int arr[100] , n;
  bool isPalindrome = true;

  cout << "Enter number of element: ";
  cin >> n;

  cout << "Enter array element:\n";

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int start = 0;
  int end = n - 1;

  while(start < end){
    if(arr[start] != arr[end]){
      isPalindrome = false;
      break;
    }

    start++;
    end--;
  }

  if(isPalindrome)
    cout << "\n Array Element is a Pelindrome!";
  else
    cout << "\n Array Element is not a Pelindrome!";
  
  return 0;
}