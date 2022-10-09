#include "LinkedList.h"

LinkedList::LinkedList(int a[], int size)
{
    Node *last;
    first = new Node;
    first->Next = NULL;
    first->data = a[0];
    last = first;

    for (int i = 1; i < size; i++)
    {
        Node *tmp = new Node;
        tmp->data=a[i];
        tmp->Next = NULL;
        last->Next = tmp;
        last = tmp;
    }
}

LinkedList::~LinkedList()
{
    Node *p = first;
    while (first != NULL)
    {
        first = first->Next;
        delete p;
        p = first;
    }
}

void LinkedList::Add()
{
}

int LinkedList::Delete()
{
}

void LinkedList::Display()
{
    Node *n = new Node;
    n = first;
    while (n != NULL)
    {
        cout << n->data;
        n = n->Next;
    }
}

int LinkedList::Length()
{
}