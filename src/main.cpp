#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;
int main()
{
    Queue q(3);
    q.Add(2);q.Add(23);q.Add(25);
    //q.Delete(); 
    cout<<q.Isempty();
    //q.Show();
    return 0;
 
}
 