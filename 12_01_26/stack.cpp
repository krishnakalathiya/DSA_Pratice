#include <iostream>

using namespace std;

#define MAX 10

class Stack
{
private:
  int stack[MAX];
  int top;

public:
  Stack()
  {
    top = -1;
  }

  void push(int value)
  {
    if (top == MAX - 1)
    {
      cout << "Stack Overflow" << endl;
    }
    else
    {
      stack[top++] = value;
      cout << value << "pushed into the stack" << endl;
    }
  }

  void pop()
  {
    if (top == -1)
    {
      cout << "Stack Empty" << endl;
    }
    else
    {
      cout << stack[top--] << "poped from stack" << endl;
    }
  }

  void peek()
  {
    if (top == -1)
    {
      cout << "stack is empty" << endl;
    }
    else
    {
      cout << "Top element" << stack[top] << endl;
    }
  }

  void display()
  {
    if (top == -1)
    {
      cout << "stack is empty" << endl;
    }
    else
    {
      cout << "stack element : " << endl; 
      for (int i = top; i >= 0; i--)
      {
        cout << stack[i] << endl;
      }
    }
  }
};

int main()
{
  Stack s;
  int choice, value;

  do
  {
    cout << "\n 1. Push\n 2. Pop\n 3. Peek\n 4.display" << endl;
    cout << "Enter Your choice: ";
    cin >> choice;

    if (choice == 1)
    {
      cout << "Enter Value: ";
      cin >> value;
      s.push(value);
    }
    else if (choice == 2)
    {
      s.pop();
    }
    else if (choice == 3)
    {
      s.peek();
    }
    else if (choice == 4)
    {
      s.display();
    }
    else
    {
      cout << "Exit Program" << endl;
    }
  } while (choice != 0);

  return 0;
}