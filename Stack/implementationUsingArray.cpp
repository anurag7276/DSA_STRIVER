// stack is a linear data structure that follows the LIFO (Last In First Out) principle.
// The last element added to the stack is the first one to be removed.
// It is similar to a stack of plates, where you can only add or remove the top plate.
// Stack can be implemented using arrays or linked lists.


/*
push(): Insert the element in the stack.

pop(): Remove and return the topmost element of the stack.

top(): Return the topmost element of the stack

size(): Return the number of remaining elements in the stack.
*/


// implementration of stack using array
#include<bits/stdc++.h>

using namespace std;
class Stack {
  int size;
  int * arr;
  int top;
  public:
    Stack() {
      top = -1;
      size = 1000;
      arr = new int[size];
    }
  void push(int x) {
    top++;
    arr[top] = x;
  }
  int pop() {
    int x = arr[top];
    top--;
    return x;
  }
  int Top() {
    return arr[top];
  }
  int Size() {
    return top + 1;
  }
};
int main() {

  Stack s;
  s.push(6);
  s.push(3);
  s.push(7);
  cout << "Top of stack is before deleting any element " << s.Top() << endl;
  cout << "Size of stack before deleting any element " << s.Size() << endl;
  cout << "The element deleted is " << s.pop() << endl;
  cout << "Size of stack after deleting an element " << s.Size() << endl;
  cout << "Top of stack after deleting an element " << s.Top() << endl;
  return 0;
}

/*
Output:

Top of stack is before deleting any element 7
Size of stack before deleting any element 3
The element deleted is 7
Size of stack after deleting an element 2
Top of stack after deleting an element 3

Time Complexity: O(1)
Space Complexity: O(1)

*/