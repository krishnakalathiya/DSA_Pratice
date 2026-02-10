// Resize a vector to larger and smaller size

#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> v = {10 , 20  , 30};

  v.resize(5);

  cout << "After incresing size:";
  for(int x : v) cout << x << " ";

  v.resize(2);

  cout << "After decresing size:";
  for(int x : v) cout << x << " ";

  return 0;
}