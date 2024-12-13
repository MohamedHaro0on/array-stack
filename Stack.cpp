#ifndef STACK_CPP
#define STACK_CPP

#include "Stack.h"
#include <type_traits>

// Constructors :
template <class T>
Stack<T>::Stack(int size) : size(size), topOfStack(-1)
{
    stack = new T[size];
}

template <class T>
Stack<T>::Stack(const Stack<T> &other) : size(other.size), topOfStack(other.topOfStack), stack(NULL)
{
    stack = new T[size];
    for (int i = 0; i < topOfStack; i++)
    {
        this->stack[i] = other.stack[i];
    }
}

// Destructor :

template <class T>
Stack<T>::~Stack()
{
    clear();
}

// Utlilty Function :

template <class T>
void Stack<T>::push(const T &object)
{
    if (isFull())
    {
        resize();
    }
    this->stack[++topOfStack] = object;
}
template <class T>
void Stack<T>::resize()
{
    int newSize = this->size * 2;
    T *newStack = new T[newSize];
    for (int i = 0; i < topOfStack; i++)
    {
        newStack[i] = this->stack[i];
    }
    delete[] this->stack;
    this->stack = newStack;
}

template <class T>
T Stack<T>::pop()
{
    if (!isEmpty())
    {
        return this->stack[topOfStack--];
    }
    else
    {
        throw "the Stack is Already Empty";
    }
}

template <class T>
T Stack<T>::peak() const
{
    if (!isEmpty())
    {
        return this->stack[topOfStack];
    }
    throw "the Stack is Empty ";
}

template <class T>
int Stack<T>::getSize() const
{
    return this->size;
}

template <class T>
bool Stack<T>::isEmpty() const
{
    return (topOfStack == -1);
}

template <class T>
bool Stack<T>::isFull() const
{
    return (topOfStack == size);
}

template <class T>
void Stack<T>::display() const
{
    if (!isEmpty())
    {
        for (int i = 0; i <= topOfStack; i++)
        {

            cout << " stack [ " << i << " ] " << " is = " << this->stack[i] << endl;
        }
    }
    else
    {
        throw "the Stack is Empty";
    }
}

template <class T>
void Stack<T>::clear()
{
    this->size = 0;
    this->topOfStack = -1;
    delete[] this->stack;
}

template <class T>
int Stack<T>::containes(const T &object) const
{

    int found = -1;

    for (int i = 0; i < topOfStack; i++)
    {
        if (this->stack[i] == object)
        {
            found = i;
            break;
        }
    }

    return found;
}

// Assignment Operator
template <class T>
Stack<T> &Stack<T>::operator=(const Stack<T> &other)
{
    if (this == &other)
    {
        return *this;
    }
    if (topOfStack > -1)
    {
        clear();
    }
    cout << "thiss is the topOfStack " << topOfStack << endl;
    cout << "this is the size " << size << "\n";
    this->stack = new T[size];
    for (int i = 0; i <= topOfStack; ++i)
    {
        this->stack[i] = other.stack[i];
    }
    return *this;
}

// Addition Operator
template <class T>
Stack<T> Stack<T>::operator+(const Stack<T> &other) const
{
    Stack<T> result(*this);
    for (int i = 0; i <= other.topOfStack; ++i)
    {
        result.push(other.stack[i]);
    }
    return result;
}

// Non-const Subscript Operator
template <class T>
T &Stack<T>::operator[](int index)
{
    if (index < 0 || index > topOfStack)
    {
        throw std::out_of_range("Index out of range");
    }
    return stack[index];
}

// Const Subscript Operator
template <class T>
const T &Stack<T>::operator[](int index) const
{
    if (index < 0 || index > topOfStack)
    {
        throw std::out_of_range("Index out of range");
    }
    return stack[index];
}

template class Stack<int>;
template class Stack<char>;

#endif