#pragma once
#include <iostream>
#include "clsMyQueue.h"

using namespace std;


template<class T>
class clsMyStack :public clsMyQueue<T>
{
	
public:

	void Push(T Index)
	{
		clsMyQueue<T>::InsertAtFront(Index);
	}

	T Top()
	{
		return clsMyQueue<T>::Front();
	}

	T Bottom()
	{
		return clsMyQueue<T>::Back();
	}


};

