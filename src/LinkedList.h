#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *Next;
};
class LinkedList
{
private:
    Node *first;

public:
    LinkedList() { first = NULL; };
    LinkedList(int A[], int n);
    ~LinkedList();
    void Add();
    void Display();
    int Delete();
    int Length();
};