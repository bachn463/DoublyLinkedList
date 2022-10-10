//
// Created by Bach Ngo on 9/5/22.
//

#ifndef DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H

#endif //DOUBLYLINKEDLIST_DOUBLYLINKEDLIST_H

using namespace std;

struct Node {
    int val;
    Node* next = nullptr;
    Node* previous = nullptr;
};

class DoublyLinkedList {
public:
    void insert(int value) {
        if(length() == 0) {
            head = new Node;
            tail = new Node;
            head->val = value;
            tail = head;
        } else {
            Node* next_temp = new Node;
            next_temp->val = value;
            next_temp->previous = tail;
            tail->next = next_temp;
            tail = next_temp;
        }
        count++;
    }

    void print() {
        Node* traverser;
        traverser = head;
        while(traverser != nullptr){
            cout << traverser->val << endl;
            traverser = traverser->next;
        }
    }

    void print_reverse() {
        Node* traverser;
        traverser = tail;
        while(traverser != nullptr) {
            cout << traverser->val << endl;
            traverser = traverser->previous;
        }
    }

    int length() {
        return count;
    }

private:
    Node* head;
    Node* tail;
    int count = 0;
};
