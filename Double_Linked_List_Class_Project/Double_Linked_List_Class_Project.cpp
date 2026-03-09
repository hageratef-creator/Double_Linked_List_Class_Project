#include <iostream>
//#include "clsDblLinkedList.h"
//#include "clsMyQueue.h"
//#include "clsMyStack.h"
#include "clsDynamicArray.h"

using namespace std;


int main()
{
	clsDynamicArray <int> DynamicArray(5);

	DynamicArray.SetItem(0, 10);
	DynamicArray.SetItem(1, 20);
	DynamicArray.SetItem(2, 30);
	DynamicArray.SetItem(3, 40);
	DynamicArray.SetItem(4, 50);

	cout << "\nIs Empty    : " << DynamicArray.IsEmpty();
	cout << "\nArray Size  : " << DynamicArray.Size();
	cout << "\nArray Items : \n";
	DynamicArray.PrintList();

	/*DynamicArray.Resize(2);
	cout << "\nArray Items After Resize : \n";
	DynamicArray.PrintList();

	DynamicArray.Resize(10);
	cout << "\nArray Items After Resize : \n";
	DynamicArray.PrintList();*/


	/*cout << "\nItem (2) : " << DynamicArray.GetItem(2);
	cout << "\nArray Items After Reverse : \n";
	DynamicArray.Reverse();
	DynamicArray.PrintList(); 

	cout << "\nArray Items After Clear : \n";
	DynamicArray.Clear();
	DynamicArray.PrintList();*/

//	cout << "\nArray Items After Delete Item At (2) : \n";
//	DynamicArray.DeleteitemAt(2);
	//DynamicArray.PrintList(); 




	return 0;
}


