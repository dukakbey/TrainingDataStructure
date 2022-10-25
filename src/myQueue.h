#pragma once
#include <iostream>

class myQueue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    myQueue(int s);
    ~myQueue();

    void Add(int a);
    void Delete();
    bool Isfull();
    bool Isempty();
    void Show();

};