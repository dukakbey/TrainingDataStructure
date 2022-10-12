#include <iostream>
#include <string>
#include "Queue.h"
#include "LinkedList.h"
#include "HashTable.h"
using namespace std;



int main()
{
	// int A[] = {16, 12, 25, 39, 6, 122, 5, 68, 75};
	// int n = sizeof(A)/sizeof(A[0]);
	// HashTable H;
	// for (int i=0; i<n; i++){
	// 	H.Insert(A[i]);
	// }
	// cout << "Successful Search" << endl;
	// int key = 6;
	// int value = H.Search(key);
	// cout << "Key: " << key << ", Value: " << value << endl;
	// cout << "Unsuccessful Search" << endl;
	// key = 95;
	// value = H.Search(key);
	// cout << "Key: " << key << ", Value: " << value << endl;

HashTable h;
h.Insert(16);
h.Insert(26);
h.Insert(6);
h.Insert(546);
// h.H_Display(6);
cout<<"searching result: "<<h.Search(25)<<endl;
	
	return 0;
}
