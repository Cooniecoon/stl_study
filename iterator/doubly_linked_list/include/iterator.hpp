#ifndef DOUBLY_LINKED_LIST__ITERATOR_HPP_
#define DOUBLY_LINKED_LIST__ITERATOR_HPP_

namespace dll
{
    struct Node
    {
        int data;
        Node* prev;
        Node* next;
    };

    class Iterator
    {

    public:
        Node* ptr;
        Iterator();
        Iterator(Node* p);

        int& operator*();

        Iterator& operator++();
        Iterator& operator--();
        bool operator==(const Iterator& it) const;
        bool operator!=(const Iterator& it) const;
    };
}
#endif // !DOUBLY_LINKED_LIST__ITERATOR_HPP__