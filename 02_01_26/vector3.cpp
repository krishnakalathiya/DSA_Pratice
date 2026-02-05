// Access vector element using at() and []

#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> v = {100 , 200 , 300 , 400};
  cout << endl;
  cout << "Using at(): " << v.at(0) << endl;
  cout << "Using []: " << v[1] << endl;

  return 0;
}