#pragma+ once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template<class T>
class clsMyQueue
{
protected :

	clsDblLinkedList<T> _MyList;

public:

	void Push(T Index)
	{
		_MyList.InsertAtEnd(Index);
	}

	void Print()
	{
		_MyList.PrintList();
	}

	void Pop()
	{
		_MyList.DeleteFirstNode();
	}

	int Size()
	{
		return _MyList.Size();
	}

	bool IsEmpty()
	{
		return _MyList.ISEmpty();
	}

	T Front()
	{
		return _MyList.GetItem(0);
	}

	T Back()
	{
		return _MyList.GetItem(Size()-1);
	}

	T GetItem(T Index)
	{
		return _MyList.GetItem(Index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	void UpdateItem(T Index, T Value)
	{
		_MyList.UpdateItem(Index,Value);
	}

	void InsertAfter(T Index,T Value)
	{
		_MyList.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Index)
	{
		_MyList.InsertAtBeginning(Index);
	}

	void InsertAtBack(T Index)
	{
		_MyList.InsertAtEnd(Index);
	}

	void Clear()
	{
		_MyList.Clear();
	}




};







