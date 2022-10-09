#include <iostream>
#include <string>
#include "Queue.h"
#include "LinkedList.h"
using namespace std;

int main()
{
    int a[] = {6,1,2,3,4,5};
    int size_a = sizeof(a)/sizeof(int);
    LinkedList l(a,size_a);
    //l.Display();
    cout<<l.Delete(0);
    //l.Display();
    //cout<<l.Length();
    return 0;
}
