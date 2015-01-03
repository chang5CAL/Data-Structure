#ifndef LINKLIST_H
#define LINKLIST_H
#include "LinkNode.h"
#include "string.h"

class LinkList
{
    public:
        LinkList();
        void Add(int data);
        bool Remove(int value);
        int Get(int index);
        void ToString();
        void Reverse();
        virtual ~LinkList();
    protected:
    private:
        LinkNode *overallRoot;
};

#endif // LINKLIST_H
