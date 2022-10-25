#include "myQueue.h"

myQueue::myQueue(int s)
{
    size = s;
    rear = -1;
    front = -1;
    Q = new int[s];
}
myQueue::~myQueue()
{
    delete[] Q;
}

void myQueue::Add(int a)
{
    rear++;
    Q[rear] = a;
}
void myQueue::Show()
{
    for (int i = front + 1; i <= rear; i++)
        std::cout << Q[i] << std::endl;
}
void myQueue::Delete()
{
    front++;
}

bool myQueue::Isempty()
{
    if (front == rear)
        return true;
    return false;
}

bool myQueue::Isfull()
{
    if (rear == size)
        return true;
    return false;
}