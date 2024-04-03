using namespace std;

class Stack
{
private:
    const int MAX_SIZE = 4;
    int _AvailableIndex = 0;
    int *_Stack;

public:
    Stack();
    ~Stack();
    void push(int n);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};