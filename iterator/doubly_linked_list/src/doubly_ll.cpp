#include "doubly_ll.hpp"

namespace dll
{
    DoublyLinkedList::DoublyLinkedList() {
        count = 0;
        header = new Node {int(),nullptr,nullptr};
        trailer = new Node {int(),nullptr,nullptr};

        header->next = trailer;
        trailer->prev = header;
    }

    DoublyLinkedList::~DoublyLinkedList()
    {
        while(!empty()) {
            pop_front();
        }
        delete header;
        delete trailer;
    }

    void DoublyLinkedList::insert(const Iterator& pos, const int& val) {
        Node* p = pos.ptr;
        Node* new_node = new Node {val, p->prev, p};
        new_node->prev->next = new_node;
        new_node->next->prev = new_node;
        count++;
    }

    void DoublyLinkedList::erase(const Iterator& pos) {
        Node* p = pos.ptr;
        p->prev->next = p->next;
        p->next->prev = p->prev;
        delete p;
        count--;
    }

    void DoublyLinkedList::push_front(const int& val) {
        insert(begin(),val);
    }


    void DoublyLinkedList::push_back(const int& val) {
        insert(end(),val);
    }

    void DoublyLinkedList::pop_front() {
        if (!empty()) erase(begin());
    }

    void DoublyLinkedList::pop_back() {
        if(!empty()) erase(--end());
    }

    void DoublyLinkedList::print_all()
    {
        Node* curr = header->next;

        while (curr != trailer) {
            std::cout << curr->data << ", ";
            curr = curr->next;
        }
        std::cout<<std::endl;
    }

    void DoublyLinkedList::print_reverse()
    {
        Node* curr = trailer->prev;

        while (curr != header) {
            std::cout << curr->data << ", ";
            curr = curr->prev;
        }
        std::cout<<std::endl;
    }

    bool DoublyLinkedList::empty() const {
        return count == 0;
    }

    int DoublyLinkedList::size() const {
        return count;
    }

    Iterator DoublyLinkedList::begin() {
        return Iterator(header->next);
    }

    Iterator DoublyLinkedList::end() {
        return Iterator(trailer);
    }

    Iterator DoublyLinkedList::find(const int& val) {
        Node* curr = header->next;
        while (curr->data != val && curr != trailer)
            curr = curr->next;
        return Iterator(curr);
    }

}