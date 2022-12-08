#ifndef DOUBLY_LINKED_LIST__DOUBLY_LL_HPP_
#define DOUBLY_LINKED_LIST__DOUBLY_LL_HPP_

#include <iostream>
#include "iterator.hpp"

namespace dll
{
    class DoublyLinkedList : public Iterator {
    public:
        DoublyLinkedList();
        ~DoublyLinkedList();

        void insert(const Iterator& pos, const int& val);
        void erase(const Iterator& pos);
        void push_front(const int& val);
        void push_back(const int& val);
        void pop_front();
        void pop_back();

        void print_all();
        void print_reverse();

        bool empty() const;
        int size() const;

        Iterator begin();
        Iterator end();

        Iterator find(const int& val);
    private:
        int count;
        Node* header;
        Node* trailer;

    };
}
#endif // !DOUBLY_LINKED_LIST__DOUBLY_LL_HPP__