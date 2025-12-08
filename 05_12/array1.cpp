// Accessing array in diffrent ways
#include <iostream>
using namespace std;

int main(){

  int a[100] , n;

  cout << "Enter number of elements: ";
  cin >> n;

  cout << "Enter " << n << " element:\n";
  for(int i = 0; i < n; i++){
    cin >> a[i];
  };

  cout << "forward access" << endl;

  for (int i = 0; i < n; i++){
    cout << "a["<< i << "] = " << a[i] << endl;
  }

  cout << "Reverse access" << endl;

  for(int i = n - 1; i >=0; i--){
    cout << "a["<< i << "] = " << a[i] << endl;
  }

  cout << "even position" << endl;

  for(int i = 0; i < n; i+=2){
    cout << "a["<< i << "] = " << a[i] << endl;
  }

  cout << "odd position" << endl;

  for(int i = 1; i < n; i+=2){
    cout << "a["<< i << "] = " << a[i] << endl;
  }

  return 0;
}