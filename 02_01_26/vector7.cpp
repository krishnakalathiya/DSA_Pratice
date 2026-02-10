// Remove an element at a specific position index using erase()

#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> v = {10 , 20 , 30 , 40 , 50};

  int pos = 0;

  v.erase(v.begin() + pos);

  for (int x : v){
    cout << x << " ";
  }

  return 0;
}