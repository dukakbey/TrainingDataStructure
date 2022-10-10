#include "Queue.h"

Queue::Queue(int s)
{
    size = s;
    rear = -1;
    front = -1;
    Q = new int[s];
}
Queue::~Queue()
{
    delete[] Q;
}

void Queue::Add(int a)
{
    rear++;
    Q[rear] = a;
}
void Queue::Show()
{
    for (int i = front + 1; i <= rear; i++)
        std::cout << Q[i] << std::endl;
}
void Queue::Delete()
{
    front++;
}

bool Queue::Isempty()
{
    if (front == rear)
        return true;
    return false;
}

bool Queue::Isfull()
{
    if (rear == size)
        return true;
    return false;
}