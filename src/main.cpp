#include <iostream>
#include "tree_class.h"
#include "sort.h"
using namespace std;
void display_array(int *a)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "a" << i << ": " << a[i] << endl;
    }
}
void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
int main()
{
    int a[] = {6, 38, 5, 40, 7};
    sort s(a, 5);
  
    s.bubleSort();
    s.display_array();
}