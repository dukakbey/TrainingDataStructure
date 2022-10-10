#pragma once
#include <iostream>
#include "Node.h"
using namespace std;
class LinkedList
{
private:
    Node *first;

public:
    LinkedList() { first = NULL; };
    LinkedList(int A[], int n);
    ~LinkedList();
    void Add(int a, int index);
    void Display();
    int Delete(int index);
    int Length();
};