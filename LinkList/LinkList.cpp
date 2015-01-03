#include "LinkList.h"

LinkList::LinkList()
{
    //ctor
    *overallRoot = 0;
}

void LinkList::Add(int data)
{
    LinkNode *current = overallRoot;
    current = new LinkNode(data);

    if (!overallRoot)
    {
        overallRoot = new LinkNode(data);
    }
    else
    {
        while (!current->next)
        {
            current = current->next;
        }
        current->next = new LinkNode(data);
    }
}

bool LinkList::Remove(int value)
{
    LinkNode *current = overallRoot;
    LinkNode *prevCurrent = overallRoot;

    if (current->data == value)
    {
        overallRoot =  current->next;

        return true;
    }
    else
    {
        current = current->next;

        while (current->next != 0)
        {
            if (current->data == value)
            {
                prevCurrent->next = current->next;

                return true;
            }

            current = current->next;
            prevCurrent = prevCurrent->next;
        }
    }

    return false;
}

int LinkList::Get(int index)
{
    LinkNode *current = overallRoot;
    int currLoc = 0;

    while (current != 0)
    {
        if (currLoc == index)
        {
            return current->data;
        }
        current = current->next;
        currLoc++;
    }
    return -1;
}

void LinkList::toString()
{
    LinkNode *current = overallRoot;

    if (current != 0)
    {
        while (current->next != 0)
        {
            cout << current->data << ", ";
            current = current->next;
        }
        cout << current->data;
    }

    else
    {
        cout << "Empty.";
    }
}

void LinkList::Reverse()
{
    LinkNode *current = overallRoot;
    if (current != 0)
    {
        while (current->next != 0)
        {
            LinkNode *temporary = current->next;

            overallRoot = current->next;

            current->next = current->next->next;

            temporary->next = current;
        }
    }
}

LinkList::~LinkList()
{
    //dtor
}
