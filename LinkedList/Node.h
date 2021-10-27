#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;
class List;
class Node
{
	friend class List;
private:
	int data;
	Node* NextPtr;
public:
	int GetData();
	Node(const int& info);
	Node();
};
#endif
