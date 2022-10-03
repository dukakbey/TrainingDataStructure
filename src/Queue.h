#include <iostream>

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    Queue(int s);
    ~Queue();

    void Add(int a);
    void Delete();
    bool Isfull();
    bool Isempty();
    void Show();

};