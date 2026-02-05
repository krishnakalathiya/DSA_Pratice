// Insert element using push_back() and display the vector

#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> v = {10 , 20};

  v.push_back(5);
  v.push_back(50);
  v.push_back(45);
  v.push_back(40);

  for(int x : v){
    cout << x << " ";
  }

  return 0;

}