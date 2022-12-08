#include "iterator.hpp"

namespace dll
{
    Iterator::Iterator() : ptr(nullptr) {}

    Iterator::Iterator(Node* p) : ptr(p) {}

    int& Iterator::operator*()
    {
        return ptr->data;
    }

    Iterator& Iterator::operator++() {
        ptr = ptr->next;
        return *this;
    }

    Iterator& Iterator::operator--() {
        ptr = ptr->prev;
        return *this;
    }

    bool Iterator::operator==(const Iterator& it) const{
        return ptr == it.ptr;
    }

    bool Iterator::operator!=(const Iterator& it) const{
        return ptr != it.ptr;
    }
}