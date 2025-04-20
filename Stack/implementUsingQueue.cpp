#include<bits/stdc++.h>

using namespace std;

class Stack {
  queue < int > q;
  public:
    void Push(int x) {
      int s = q.size();
      q.push(x);
      for (int i = 0; i < s; i++) {

        q.push(q.front());
        q.pop();
      }
    }
  int Pop() {
    int n = q.front();
    q.pop();
    return n;
  }
  int Top() {
    return q.front();
  }
  int Size() {
    return q.size();
  }
};

int main() {
  Stack s;
  s.Push(3);
  s.Push(2);
  s.Push(4);
  s.Push(1);
  cout << "Top of the stack: " << s.Top() << endl;
  cout << "Size of the stack before removing element: " << s.Size() << endl;
  cout << "The deleted element is: " << s.Pop() << endl;
  cout << "Top of the stack after removing element: " << s.Top() << endl;
  cout << "Size of the stack after removing element: " << s.Size();

}

/*
Output:

Top of the stack: 1
Size of the stack before removing element: 4
The deleted element is: 1
Top of the stack after removing element: 4
Size of the stack after removing element: 3

Time Complexity: O(N)

Space Complexity: O(N)

*/
// The space complexity is O(N) because we are using a queue to implement the stack, and the queue will store all the elements of the stack. 
//time complexity is O(N) because we are iterating through the queue to reverse the order of elements when pushing an element onto the stack. This operation takes O(N) time.