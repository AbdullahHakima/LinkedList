#ifndef LIST_H
#define LIST_H
#include"Node.h"
#include<iostream>
using namespace std;
class List
{
	private:
		Node* FirstPtr;
		Node* LastPtr;
		Node* GetNewNode(const int&);
public:
	List();
	bool IsEmpty();
	~List();
	void PrintData();
	void InsertAtFront(const int& value);
	void InsertAtBack(const int& value);
	bool RemoveFromFront(int& value);
	bool RemoveFromBack(int& value);

};
#endif
//const int &info

