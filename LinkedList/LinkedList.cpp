#include<iostream>
#include"Node.h"
#include"List.h"
using namespace std;
void Instructions()
{
	cout << "Enter one of the following\n";
	cout << " 1 to InsertAtFront\n"
		 << " 2 to InsertAtBack\n"
		 << " 3 to RemoveFromFront\n"
		 << " 4 to RemoveFromBack\n"
	   	 << " 5 to Print data of list\n"
		 << " 6 to End The Processing\n";
}
void TestList(List& Linked)
{
	Instructions();
	int choice, value;
	do
	{
		cin >> choice;
		switch (choice)
		{
		case 1:
			cin >> value;
			Linked.InsertAtFront(value);
			break;
		case 2:
			cin >> value;
			Linked.InsertAtBack(value);
			break;
		case 3:
			if (Linked.RemoveFromFront(value))
				cout << value << " Removed from list\n";
			break;
		case 4:
			if (Linked.RemoveFromBack(value))
				cout << value << " Removed from list\n";
			break;
		case 5:
			Linked.PrintData();
			break;
		}
	} while (choice!=6);
}
int main()
{
	List LinkedList;
	TestList(LinkedList);
	return 0;
}