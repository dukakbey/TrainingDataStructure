#pragma once
#include <iostream>
#include "Node.h"
using namespace std;


// Hash Table
class HashTable
{
public:
    Node **HT;
    HashTable();
    int hash(int key);
    void Insert(int key);
    int Search(int key);
    ~HashTable();
};
