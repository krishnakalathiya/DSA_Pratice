// BFS (Breadth first serach) implementation
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <string>

using namespace std;

// interface

class SocialNetwork{
  private:
    map<string , vector<string>> friends;

  public:
    void addFriendship(string person1 , string person2){
      friends[person1].push_back(person2);
      friends[person2].push_back(person1);
    }

    void findShortcutPath(string start , string target){
      if(start == target){
        cout << "Same Person" << endl;
        return;
      }

      map<string , bool> visited;
      map<string , string> parent;
      queue<string> q;
    }
};