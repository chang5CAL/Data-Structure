#ifndef LINKNODE_H
#define LINKNODE_H


class LinkNode
{
    public:
        LinkNode(int value);
        LinkNode(LinkNode *data,int value);\
        virtual ~LinkNode();

        int data;
        LinkNode *next;
    protected:
    private:
};

#endif // LINKNODE_H
