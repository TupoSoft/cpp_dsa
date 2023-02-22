#include <linked_list.hpp>

List::List()
{
    this->root_ = nullptr;
}

List::~List()
{
    for(auto *cur = this->root_; cur; )
    {
        auto *tmp = cur;
        cur = cur->next;
        delete tmp;
    }
}