#include<bits/stdc++.h>
using namespace std;
// implementration of queue using array
// A queue is a data structure that follows the First In First Out (FIFO) principle. It means that the first element added to the queue will be the first one to be removed. A queue can be implemented using an array or a linked list. In this implementation, we will use an array to implement a queue.


class Queue {
  int * arr;
  int start, end, currSize, maxSize;
  public:
    Queue() {
      arr = new int[16];
      start = -1;
      end = -1;
      currSize = 0;
    }

  Queue(int maxSize) {
    ( * this).maxSize = maxSize;
    arr = new int[maxSize];
    start = -1;
    end = -1;
    currSize = 0;
  }
  void push(int newElement) {
    if (currSize == maxSize) {
      cout << "Queue is full\nExiting..." << endl;
      exit(1);
    }
    if (end == -1) {
      start = 0;
      end = 0;
    } else
      end = (end + 1) % maxSize;
    arr[end] = newElement;
    cout << "The element pushed is " << newElement << endl;
    currSize++;
  }
  int pop() {
    if (start == -1) {
      cout << "Queue Empty\nExiting..." << endl;
        exit(1);
    }
    int popped = arr[start];
    if (currSize == 1) {
      start = -1;
      end = -1;
    } else
      start = (start + 1) % maxSize;
    currSize--;
    return popped;
  }
  int top() {
    if (start == -1) {
      cout << "Queue is Empty" << endl;
      exit(1);
    }
    return arr[start];
  }
  int size() {
    return currSize;
  }

};

int main() {
  Queue q(6);
  
  q.push(4);
  q.push(14);
  q.push(24);
  q.push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.size() << endl;

  return 0;
}

/*
Output:

The element pushed is 4
The element pushed is 14
The element pushed is 24
The element pushed is 34
The peek of the queue before deleting any element 4
The size of the queue before deletion 4
The first element to be deleted 4
The peek of the queue after deleting an element 14
The size of the queue after deleting an element 3

*/
// Time Complexity: O(1) for all operations
// Space Complexity: O(1) for all operations
// Note: The space complexity is O(1) because we are using a fixed size array to store the elements of the queue. The space used by the queue does not depend on the number of elements in the queue, but rather on the maximum size of the queue. Hence, it is considered O(1).