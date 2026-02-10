// Remove last element using pop_back() in vector

#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> v = {1 , 2 , 3 , 4};

  v.pop_back();
  v.pop_back();

  for(int x : v){
    cout << x << " ";
  }


  return 0;
}