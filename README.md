# Stack Implementation in C++

## Overview
This project demonstrates a custom implementation of a generic stack data structure in C++. The stack is implemented as a class template (`Stack`) and supports various operations such as pushing, popping, resizing, and accessing elements using operators.

## Features
- **Template-based implementation**: The stack can handle elements of any data type.
- **Dynamic resizing**: Automatically resizes the stack when it becomes full.
- **Utility functions**:
  - `push`: Add an element to the stack.
  - `pop`: Remove and return the top element of the stack.
  - `peak`: View the top element without removing it.
  - `isEmpty`: Check if the stack is empty.
  - `isFull`: Check if the stack is full.
  - `display`: Print all elements in the stack.
  - `clear`: Clear the stack.
  - `contains`: Check if an element exists in the stack.
- **Operator Overloading**:
  - `=`: Assignment operator for copying stacks.
  - `+`: Combines two stacks into one.
  - `[]`: Access elements by index (supports const and non-const access).

## Files
- `Stack.h`: Header file containing the stack class declaration.
- `Stack.cpp`: Implementation of the stack class.
- `main.cpp`: Test program demonstrating the stack's features.

## Usage

### Prerequisites
- A C++ compiler that supports the C++11 standard or later.

### Compilation
To compile the project, use the following command:
```bash
 g++ -std=c++11 main.cpp -o stack_demo
```

### Execution
Run the compiled program:
```bash
 ./stack_demo
```

### Example Output
The following operations are demonstrated in `main.cpp`:
- Push elements onto the stack.
- Pop elements from the stack.
- Access elements using the subscript operator.
- Copy stacks and combine them using the `+` operator.

Example output:
```
Stack after pushing 10, 20, 30:
Top element: 30
Stack size: 10

After popping the top element:
Top element: 20
Stack size: 10

After pushing 40, 50, 60:
Top element: 60
Stack size: 20

Accessing elements by index:
Element at index 0: 10
Element at index 1: 20

After copy construction:
Top element of copied stack: 60

After combining stacks with + operator:
Top element of combined stack: 60
Combined stack size: 40
```

## Implementation Details
- The `Stack` class is implemented as a template to support multiple data types.
- Dynamic resizing ensures efficient use of memory while preventing stack overflow.
- Error handling is implemented to throw exceptions for invalid operations like popping from an empty stack or accessing out-of-range indices.

## Classes and Methods

### Class: `Stack<T>`

#### Public Methods:
| Method                  | Description                                      |
|-------------------------|--------------------------------------------------|
| `Stack(int size)`       | Constructs a stack with a given size (default 10). |
| `Stack(const Stack<T>&)`| Copy constructor.                                |
| `~Stack()`              | Destructor to free allocated memory.            |
| `void push(const T&)`   | Pushes an element onto the stack.                |
| `T pop()`               | Pops and returns the top element of the stack.   |
| `T peak() const`        | Returns the top element without removing it.     |
| `bool isEmpty() const`  | Checks if the stack is empty.                    |
| `bool isFull() const`   | Checks if the stack is full.                     |
| `void display() const`  | Displays all elements of the stack.              |
| `void clear()`          | Clears the stack.                                |
| `int contains(const T&) const` | Returns the index of an element if present. |
| `Stack<T>& operator=(const Stack<T>&)` | Assignment operator for stack copying. |
| `Stack<T> operator+(const Stack<T>&)` | Combines two stacks.                 |
| `T& operator[](int)`    | Accesses an element by index.                    |
| `const T& operator[](int) const` | Accesses an element by index (const).     |

### Private Methods:
| Method          | Description                                      |
|------------------|--------------------------------------------------|
| `void resize()` | Resizes the stack to accommodate more elements.  |


## Author
Mohamed Ahmed Ali Haroon 
