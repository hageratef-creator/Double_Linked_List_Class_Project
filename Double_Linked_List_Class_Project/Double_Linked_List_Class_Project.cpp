#include <iostream>
//#include "clsDblLinkedList.h"
//#include "clsMyQueue.h"
#include "clsMyStack.h"

using namespace std;


int main()
{
	clsMyStack <int >MyStack;


	MyStack.Push(10);
	MyStack.Push(20);
	MyStack.Push(30);
	MyStack.Push(40);
	MyStack.Push(50);

	cout << "My Stack  : ";
	MyStack.Print();


	cout << "\nTop = " << MyStack.Top() << endl;
	cout << "\Bottom = " << MyStack.Bottom() << endl;
	cout << "\nSize = " << MyStack.Size() << endl;
	cout << "\nStack After Pop :\n ";
	MyStack.Pop();
	MyStack.Print();

	cout << "\nItem (2) : " << MyStack.GetItem(2);

	cout << "\Stack After Reverse :\n ";
	MyStack.Reverse();
	MyStack.Print();

	cout << "\nStack After Updating Item  :\n ";
	MyStack.UpdateItem(2,600);
	MyStack.Print();

	cout << "\nStack After Insert After  :\n ";
	MyStack.InsertAfter(2, 800);
	MyStack.Print();

	cout << "\nStack After Insert At Top  :\n ";
	MyStack.InsertAtFront(1000);
	MyStack.Print();

	cout << "\nStack After Insert At Bootom  :\n ";
	MyStack.InsertAtBack(2000);
	MyStack.Print();

	cout << "\nStack After Clear  :\n ";
	MyStack.Clear();
	MyStack.Print();


	return 0;
}
















