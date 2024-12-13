#include "Stack.h"
using namespace std;

int main()
{
     try
     {
          // Create a stack of integers with default size
          Stack<int> stack;

          // Push some elements onto the stack
          stack.push(10);
          stack.push(20);
          stack.push(30);

          std::cout << "Stack after pushing 10, 20, 30:" << std::endl;
          std::cout << "Top element: " << stack.peak() << std::endl;
          std::cout << "Stack size: " << stack.getSize() << std::endl;

          // Pop one element from the stack
          stack.pop();
          std::cout << "\nAfter popping the top element:" << std::endl;
          std::cout << "Top element: " << stack.peak() << std::endl;
          std::cout << "Stack size: " << stack.getSize() << std::endl;

          // Push more elements to test resizing
          stack.push(40);
          stack.push(50);
          stack.push(60);

          std::cout << "\nAfter pushing 40, 50, 60:" << std::endl;
          std::cout << "Top element: " << stack.peak() << std::endl;
          std::cout << "Stack size: " << stack.getSize() << std::endl;

          // Access elements using the subscript operator
          std::cout << "\nAccessing elements by index:" << std::endl;
          std::cout << "Element at index 0: " << stack[0] << std::endl;
          std::cout << "Element at index 1: " << stack[1] << std::endl;

          // Copy constructor test
          Stack<int> stackCopy(stack);
          std::cout << "\nAfter copy construction:" << std::endl;
          std::cout << "Top element of copied stack: " << stackCopy.peak() << std::endl;

          // Add stacks using the + operator
          Stack<int> combinedStack = stack + stackCopy;
          std::cout << "\nAfter combining stacks with + operator:" << std::endl;
          std::cout << "Top element of combined stack: " << combinedStack.peak() << std::endl;
          std::cout << "Combined stack size: " << combinedStack.getSize() << std::endl;
     }
     catch (const exception &e)
     {
          cout << "Exception: " << e.what() << endl;
     }

     return 0;
}