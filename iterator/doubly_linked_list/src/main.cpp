#include "doubly_ll.hpp"

int main()
{
    dll::DoublyLinkedList dllist;
    dllist.push_back(10);
    dllist.push_back(5);
    dllist.push_back(30);

    auto it = dllist.find(10);
    if (it != dllist.end())
        dllist.insert(it,50);

    for (auto n : dllist)
        std::cout << n << ", ";
    std::cout << std::endl;
    dllist.print_all();
}