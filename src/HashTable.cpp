#include "HashTable.h"

HashTable::HashTable()
{
	HT = new Node *[10];
	for (int i = 0; i < 10; i++)
	{
		HT[i] = NULL;
	}
};

int HashTable::hash(int key)
{
	return key % 10;
};

void HashTable::Insert(int key)
{
	int hIdx = hash(key);
	Node *t = new Node;
	t->data = key;
	t->Next = NULL;
	// Case: No nodes in the linked list
	if (HT[hIdx] == NULL)
	{
		HT[hIdx] = t;
	}
	else
	{
		Node *p = HT[hIdx];
		Node *q = HT[hIdx];
		// Traverse to find insert position
		while (p && p->data < key)
		{
			q = p;
			p = p->Next;
		}
		// Case: insert position is first
		if (q == HT[hIdx]&& q->data>t->data)
		{
			t->Next = HT[hIdx];
			HT[hIdx] = t;
		}
		else
		{
			t->Next = q->Next;
			q->Next = t;
		}
	}
};

int HashTable::Search(int key)
{
	int hIdx = hash(key);
	Node *p = HT[hIdx];
	while (p)
	{
		if (p->data == key)
		{
			return p->data;
		}
		p = p->Next;
	}
	return -1;
};

void HashTable::H_Display(int a)
{
	Node *ds;
	ds = HT[a];
	int i = 1;
	while (ds)
	{
		cout << "HT"
			 << "[" << i << "]"
			 << "value" << i << ": " << ds->data << endl;
		i++;
		ds = ds->Next;
	}
}

HashTable::~HashTable()
{
	for (int i = 0; i < 10; i++)
	{
		Node *p = HT[i];
		while (HT[i])
		{
			HT[i] = HT[i]->Next;
			delete p;
			p = HT[i];
		}
	}
	delete[] HT;
};