#include <iostream>
#include "doublylinkedlist.h"

using namespace std;

int main() {
    DoublyLinkedList dll;
    dll.insert(1);
    dll.insert(2);
    dll.insert(3);
    dll.insert(4);
    dll.insert(5);
    dll.insert(6);
    dll.insert(7);

    dll.print_reverse();

    return 0;
}
