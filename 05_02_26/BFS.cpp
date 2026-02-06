// BFS (Breadth first serach) implementation in C++

// Examples: Social Networking

// Scenario : Find the sortest connection between two friends / People (facebook / twitter)

#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <string>

using namespace std;

// interface

class SocialNetwork
{
private:
  map<string, vector<string>> friends;

public:
  void addFriendship(string person1, string person2)
  {
    friends[person1].push_back(person2);
    friends[person2].push_back(person1);
  }

  void findShortcutPath(string start, string target)
  {
    if (start == target)
    {
      cout << "Same Person" << endl;
      return;
    }

    map<string, bool> visited;
    map<string, string> parent;
    queue<string> q;

    visited[start] = true;

    q.push(start);

    parent[start] = "";

    bool founds = false;

    // BFS

    while (!q.empty() && !founds)
    {
      string person = q.front();
      q.pop();
      for (string friendsPerson : friends[start])
      {
        if (!visited[friendsPerson])
        {
          visited[friendsPerson] = true;
          parent[friendsPerson] = person;
          q.push(friendsPerson);
        }
  
        if (friendsPerson == target)
        {
          founds = true;
          break;
        }
      }
    }


    if (founds)
    {
      vector<string> path;

      string current = target;

      while (current != "")
      {
        path.insert(path.begin(), current);
        current = parent[current];
      }

      cout << "Connection path:";

      for (int i = 0; i < path.size(); i++)
      {
        cout << path[i];
        if (i < path.size() - 1)
        {
          cout << "->";
        }
        cout << "Seperation:" << path.size() - 1 << endl;
      }

    }else{
      cout << "No connection found!" << endl;
    }
  }
};

int main()
{

  SocialNetwork network;

  network.addFriendship("alice", "bob");
  network.addFriendship("alice", "charlie");
  network.addFriendship("alice" , "david");
  network.addFriendship("alice" , "frank");

  network.findShortcutPath("alice" , "frank");

  return 0;
}