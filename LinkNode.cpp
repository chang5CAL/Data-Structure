#include "LinkNode.h"

LinkNode::LinkNode(int value)
{
    LinkNode(0,value);
}

LinkNode::LinkNode(LinkNode *data,int value)
{
    this->data = value;
    next = data;
}

LinkNode::~LinkNode()
{
    //dtor
}
