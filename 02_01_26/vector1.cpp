// Create a vector of integers , initialize it with some values , and print the values to the console.

#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> v = {10 , 20 , 30 , 40 , 50 , 60};

  // size()

  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }


  return 0;
}