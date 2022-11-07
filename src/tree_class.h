#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class Node
{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class sc_tree
{
private:
    Node *root;

public:
    sc_tree() { root = NULL; }
    ~sc_tree(){};
    void create_tree();
    void Preorder(Node *p);
    void Preorder() { Preorder(root); }
    void iterative_Preorder(){iterative_Preorder(root);};
    void iterative_Preorder(Node *p);
    void iterative_Postorder(){iterative_Postorder(root);}
    void iterative_Postorder(Node *p);
};

void sc_tree::Preorder(Node *p)
{
    if (p)
    {
        cout << p->data << ", " << flush;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void sc_tree::iterative_Preorder(Node *p)
{
    stack<Node *> s;
    while (p !=nullptr || !s.empty())
    {
        if (p != NULL)
        {
            s.emplace(p);
            cout << p->data << endl;
            p = p->lchild;
        }
        else
        {
            p = s.top();
            s.pop();
            p = p->rchild;
        }
    }
}

void sc_tree::iterative_Postorder(Node *p)
{
    stack<Node *> s;
    while (p !=nullptr || !s.empty())
    {
        if (p != NULL)
        {
            s.emplace(p);
            cout << p->data << endl;
            p = p->rchild;
        }
        else
        {
            p = s.top();
            s.pop();
            p = p->lchild;
        }
    }

}

void sc_tree::create_tree()
{
    Node *p, *t;
    queue<Node *> q;
    int x;
    root = new Node;
    cout << "please enter a root value: ";
    cin >> x;
    root->data = x;
    root->lchild = NULL;
    root->rchild = NULL;

    q.emplace(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();

        cout << "please enter left child for value " << p->data << ": ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            q.emplace(t);
            p->lchild = t;
        }
        cout << "please enter right child for value " << p->data << ": ";
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            q.emplace(t);
            p->rchild = t;
        }
    }
}