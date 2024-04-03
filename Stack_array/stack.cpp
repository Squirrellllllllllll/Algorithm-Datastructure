// First In Last Out
// Functions: Push(In), Pop(out), Peek(check)
// Pointer = available index

#include "stack_class.cpp"

Stack::Stack()
{
    _AvailableIndex = 0;
    _Stack = new int[MAX_SIZE];
}

Stack::~Stack()
{
    delete[] _Stack;
}

void Stack::push(int n)
{
    if (isFull())
        return;
    _Stack[_AvailableIndex] = n;
    _AvailableIndex++;
}

int Stack::pop()
{
    if (isEmpty())
        return 0;
    _AvailableIndex--;
    return _Stack[_AvailableIndex];
}

int Stack::peek()
{
    if (isEmpty())
        return 0;
    return _Stack[_AvailableIndex - 1];
}

bool Stack::isEmpty()
{
    return (_AvailableIndex == 0);
}

bool Stack::isFull()
{
    return (_AvailableIndex > MAX_SIZE);
}
