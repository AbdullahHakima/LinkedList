#include "List.h"

Node* List::GetNewNode(const int&v)
{
    return new Node(v);
}

List::List()
{
    FirstPtr = 0;
    LastPtr = 0;
}

bool List::IsEmpty()
{
    return (FirstPtr==NULL);
}

List::~List()
{
    if (IsEmpty())
    {
        cout << "List have not any Node!\n";
    }
    else
    {
        cout << "List are destroying..\n";
        Node* CurrentPtr = FirstPtr;
        Node* TempPtr;
        while (CurrentPtr != 0)
        {
            TempPtr = CurrentPtr;
            cout << TempPtr->data << endl;
            CurrentPtr = CurrentPtr->NextPtr;
            delete TempPtr;
        }
        cout << "All nodes have destroyed\n";
    }
}

void List::PrintData()
{
    if (IsEmpty())
    {
        cout << "List have not any node\n";
    }
    else
    {
        Node* CurrentPtr = FirstPtr;
        cout << "List is :\n";
        while (CurrentPtr!=0)
        {
            cout << CurrentPtr->data << endl;
            CurrentPtr = CurrentPtr->NextPtr;
        }
    }
}

void List::InsertAtFront(const int& value)
{
    Node* NewPtr = GetNewNode(value);
    if (IsEmpty())
    {
        FirstPtr = LastPtr = NewPtr;
    }
    else
    {
        NewPtr->NextPtr = FirstPtr;
        FirstPtr = NewPtr;
    }

}

void List::InsertAtBack(const int& value)
{
    Node* NewPtr = GetNewNode(value);
    if (IsEmpty())
    {
        FirstPtr = LastPtr = NewPtr;
    }
    else
    {
        LastPtr->NextPtr = NewPtr;
        LastPtr = NewPtr;
    }
}

bool List::RemoveFromFront(int& value)
{
    if (IsEmpty())
    {
        return false;
    }
    else
    {
        Node* TempPtr = FirstPtr;
        if (FirstPtr == LastPtr)
        {
            FirstPtr = LastPtr = 0;
        }
        else
        {
            FirstPtr = FirstPtr->NextPtr;
            value = TempPtr->data;
            delete TempPtr;
            return true;
        }
    }
}

bool List::RemoveFromBack(int& value)
{
        if (IsEmpty())
        {
            return false;
        }
        else
        {
            Node* CurrentPtr = FirstPtr;
            Node* TempPtr=LastPtr;
            if (FirstPtr == LastPtr)
            {
                FirstPtr = LastPtr = 0;
            }
            else
            {
                while (CurrentPtr->NextPtr != LastPtr)
                {
                    CurrentPtr = CurrentPtr->NextPtr;
                }
                LastPtr = CurrentPtr;
                CurrentPtr->NextPtr = 0;
            }
            value = TempPtr->data;
            delete TempPtr;
            return true;
        }
    }


