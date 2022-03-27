#ifndef QUEUE_USING_STACK_H_
#define QUEUE_USING_STACK_H_

#include <stack>

// Implement a first in first out (FIFO) queue using only two stacks. The
// implemented queue should support all the functions of a normal queue (push,
// peek, pop, and empty).

// Implement the MyQueue class:

// void push(int x) Pushes element x to the back of the queue.
// int pop() Removes the element from the front of the queue and returns it.
// int peek() Returns the element at the front of the queue.
// boolean empty() Returns true if the queue is empty, false otherwise.
// Notes:

// You must use only standard operations of a stack, which means only push to
// top, peek/pop from top, size, and is empty operations are valid. Depending on
// your language, the stack may not be supported natively. You may simulate a
// stack using a list or deque (double-ended queue) as long as you use only a
// stack's standard operations.
namespace problem {

class MyQueue {
 public:
  MyQueue() {}

  void push(int x) {
    while (!main_.empty()) {
      secondary_.push(main_.top());
      main_.pop();
    }
    main_.push(x);
    while (!secondary_.empty()) {
      main_.push(secondary_.top());
      secondary_.pop();
    }
  }

  int pop() {
    auto x = main_.top();
    main_.pop();
    return x;
  }

  int peek() { return main_.top(); }

  bool empty() { return main_.empty(); }

 private:
  std::stack<int> main_;
  std::stack<int> secondary_;
};

}  // namespace problem

#endif