#include <iostream>
using namespace std;

/* Base Class */
class SchoolStack {
public:
    virtual void addStudent(int id) = 0;
    virtual void removeStudent() = 0;
    virtual void lastStudent() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

/* Derived Class */
class StudentRegister : public SchoolStack {
private:
    int students[5];   // Student ID register
    int top;

public:
    StudentRegister() {
        top = -1;
    }

    void addStudent(int id) {
        if (isFull()) {
            cout << "Admission Register is FULL\n";
        } else {
            top++;
            students[top] = id;
            cout << "Student ID " << id << " admitted successfully\n";
        }
    }

    void removeStudent() {
        if (isEmpty()) {
            cout << "No students to remove\n";
        } else {
            cout << "Student ID " << students[top]
                 << " admission removed\n";
            top--;
        }
    }

    void lastStudent() {
        if (isEmpty()) {
            cout << "No students admitted yet\n";
        } else {
            cout << "Last admitted Student ID: "
                 << students[top] << endl;
        }
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == 4);
    }
};

/* Main Function */
int main() {
    SchoolStack *register1 = new StudentRegister();
    int choice, id;

    do {
        cout << "\n--- SCHOOL ADMISSION MENU ---\n";
        cout << "1. Admit Student\n";
        cout << "2. Remove Last Student\n";
        cout << "3. View Last Admitted Student\n";
        cout << "4. Check Empty Register\n";
        cout << "5. Check Full Register\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Student ID: ";
            cin >> id;
            register1->addStudent(id);
        }
        else if (choice == 2) {
            register1->removeStudent();
        }
        else if (choice == 3) {
            register1->lastStudent();
        }
        else if (choice == 4) {
            if (register1->isEmpty())
                cout << "Admission Register is EMPTY\n";
            else
                cout << "Admission Register is NOT EMPTY\n";
        }
        else if (choice == 5) {
            if (register1->isFull())
                cout << "Admission Register is FULL\n";
            else
                cout << "Admission Register is NOT FULL\n";
        }

    } while (choice != 6);

    delete register1;
    return 0;
}