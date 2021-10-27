#include "Node.h"

int Node::GetData()
{
    return data;
}

Node::Node(const int &info)
{
    data = info;
    NextPtr = NULL;
}
