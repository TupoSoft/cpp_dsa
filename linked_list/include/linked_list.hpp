#ifndef LINKED_LIST_H
#define LINKED_LIST_H

template <typename T>
class List
{
private:
    struct ListNode
    {
        T val;
        struct ListNode *next;
    };

    ::ListNode *root_;
public:
    List();
    ~List();
}

#endif //LINKED_LIST_H