#include <iostream>
#include <vector>
using namespace std;

// Class Template
template <class T>
class MemoryCalculate
{
public:
    T id;
    string name;

    // Constructor
    MemoryCalculate(T i, string n)
    {
        id = i;
        name = n;
    }

    // Display function
    void display()
    {
        cout << "ID: " << id << "  Name: " << name << endl;
    }
};

int main()
{
    vector<MemoryCalculate<int>> students;

    // Add Students
    students.push_back(MemoryCalculate<int>(1, "abc"));
    students.push_back(MemoryCalculate<int>(2, "xyz"));
    students.push_back(MemoryCalculate<int>(3, "pqr"));

    // Display All Students
    cout << "All Students:\n";
    for (int i = 0; i < students.size(); i++)
    {
        students[i].display();
    }

    // Search Student by ID
    int searchId = 2;
    cout << "\nSearch Student ID = " << searchId << endl;
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].id == searchId)
        {
            students[i].display();
        }
    }

    // Remove Student by ID
    int removeId = 1;
    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].id == removeId)
        {
            students.erase(students.begin() + i);
            break;
        }
    }

    // Display After Remove
    cout << "\nAfter Removing Student:\n";
    for (int i = 0; i < students.size(); i++)
    {
        students[i].display();
    }

    return 0;
}