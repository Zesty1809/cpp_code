/*
 * WAP in C/C++ to implement stack operation
 * (a) push
 * (b) pop
 */

#include <iostream>

#define MAX_SIZE 100

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[MAX_SIZE];
        top = -1;
    }

    void push(int x)
    {
        if (top == MAX_SIZE - 1)
        {
            std::cout << "Stack Overflow";
            return;
        }

        arr[++top] = x;
    }

    int pop()
    {
        if (top == -1)
        {
            std::cout << "No element to pop";
            return 1;
        }

        return arr[top--];
    }

    int Top()
    {
        if (top == -1)
        {
            std::cout << "No element in stack";
            return 1;
        }

        return arr[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void display()
    {
    }
};

int main()
{
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);

    std::cout << st.Top() << std::endl;
    std::cout << st.pop() << std::endl;
    std::cout << st.pop() << std::endl;
    std::cout << st.pop() << std::endl;
    std::cout << st.isEmpty() << std::endl;

    return 0;
}