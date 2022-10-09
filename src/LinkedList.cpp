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
        tmp->data = a[i];
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

void LinkedList::Add(int a, int index)
{
    if (index > Length() || index < 0)
    {
        return;
    }
    Node *t, *p = first;
    t = new Node;
    t->data = a;
    t->Next = NULL;
    if (index == 0)
    {
        t->Next = first;
        first = t;
    }
    for (int i = 0; i < index - 1; i++)
        p = p->Next;
    t->Next = p->Next;
    p->Next = t;
}

int LinkedList::Delete(int index)
{
    Node *tmp, *p = first;
    int x;

    if (index < 0 || index > Length())
        return -1;
    if (index == 0)
    {
        Node *t = first;
        first = first->Next;
        x = t->data;
        delete t;
        //cout << "index " << index << " is deleted" << endl;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->Next;
        tmp = p->Next;
        p->Next = tmp->Next;
        delete tmp;
        //cout << "index " << index << " is deleted" << endl;
    }
    return x;
}

void LinkedList::Display()
{
    Node *n = new Node;
    n = first;
    int i = 0;
    while (n != NULL)
    {
        cout << "data" << i << ": " << n->data << endl;
        n = n->Next;
        i++;
    }
    cout << "_______________-" << endl;
}

int LinkedList::Length()
{
    Node *tmp = first;
    int a = 0;
    while (tmp)
    {
        a++;
        tmp = tmp->Next;
    }
    return a;
}