#pragma once
#include <iostream>

using namespace std;


template<class T>
class clsDblLinkedList
{
protected:

    int _size = 0;
    

public:

    class Node
    {
    public:
        int value;
        Node* next;
        Node* prev;
    };

    Node* head = NULL;


    void PrintList()
    {
        Node*Current = head;
        while (Current != NULL)
        {
            cout << Current->value << " ";
            Current = Current->next;
        }
    }

    void InsertAtBeginning(T value) {

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        _size++;
    }

    Node* Find(T Value)
    {
        Node* Current = head;
        while (Current != NULL) {

            if (Current->value == Value)
                return Current;


            Current = Current->next;
        }
        return NULL;
    }

    void InsertAfter(Node* current, T value) 
    {
        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;
        _size++;
    }

    void InsertAtEnd(T value) 
    {
        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = NULL;
        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
        _size++;
    }

    void DeleteNode(Node*& NodeToDelete) 
    {
        Node* Current = head;
        if (Current == NULL || NodeToDelete == NULL) {
            return;
        }
        if (Current == NodeToDelete) {
            Current = NodeToDelete->next;
        }
        if (NodeToDelete->next != NULL) {
            NodeToDelete->next->prev = NodeToDelete->prev;
        }
        if (NodeToDelete->prev != NULL) {
            NodeToDelete->prev->next = NodeToDelete->next;
        }
        delete NodeToDelete;
        _size--;
    }

    void DeleteFirstNode()
    {
        if (head == NULL)
        {
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != NULL)
        {
            head->prev = NULL;
        }
        delete temp;
        _size--;
    }

    void DeleteLastNode()
    {
        if (head == NULL)
        {
            return;
        }

        Node* current = head;
        Node* pref = head;

        while (current != NULL && current->next != NULL)
        {
            pref = current;
            current = current->next;
        }

        pref->next = NULL;
        delete current;
        _size--;
    }

    int Size()
    {
        return _size;
    }

    bool ISEmpty()
    {
       return _size == 0 ? true : false;
    }

    void Clear()
    {
        while (_size > 0)
        {
            DeleteFirstNode();
        }
    }

    void Reverse()
    {
        Node* current = head;
        Node* temp = nullptr;

        while (current != nullptr)
        {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        if (temp!=nullptr)
        {
            head = temp->prev;
        }

    }
 
    Node* GetNode(T Index)
    {
        short Counter = 0;
        Node* Current = head;

        if (Index > _size + 1 || Index < 0)
        {
            return NULL;
        }

        while (Current != NULL && Current->next != NULL)
        {
            if (Counter == Index)
            {
                break;
            }
            Counter++;
            Current = Current->next;
        }
        return Current;
    }

    T GetItem(T Index)
    {
         Node* ItemNode = GetNode(Index);

         return ItemNode == NULL ? NULL : ItemNode->value;
    }

    bool UpdateItem(T Index, T Value)
    {
        Node* ItemNode = GetNode(Index);

        if (ItemNode != NULL)
        {
            ItemNode->value = Value;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool InsertAfter(T Index, T value)
    {
        
        Node* current = GetNode(Index);
        if (current!=NULL)
        {
            InsertAfter(current, value);
            return true;
        }
        return false;
    }

};








