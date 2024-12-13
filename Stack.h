#ifndef STACK_H
#define STACK_H
#define DEFAULT_SIZE 10

#include <iostream>
using std::cout;
using std::endl;
template <class T>
class Stack
{
private:
    int topOfStack;
    int size;
    T *stack;
    void resize();

public:
    // Constructors :
    Stack(int size = DEFAULT_SIZE);
    Stack(const Stack<T> &);
    // Destructor :
    ~Stack();

    // Utlilty Function :

    void push(const T &);
    T pop();
    T peak() const;
    int getSize() const;
    bool isEmpty() const;
    bool isFull() const;
    void display() const;
    void clear();

    int containes(const T &object) const;

    // operators :
    Stack<T> &operator=(const Stack<T> &other);
    Stack<T> operator+(const Stack<T> &other) const;
    T &operator[](int index);
    const T &operator[](int index) const;
};

#endif