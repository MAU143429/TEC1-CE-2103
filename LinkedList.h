//
// Created by mau14 on 7/3/21.
//

#ifndef TAREA_1_EC_DATOS_II_LINKEDLIST_H
#define TAREA_1_EC_DATOS_II_LINKEDLIST_H

#include "Node.h"
class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void append(int data);
    void delete_node();
    void print();

private:
    Node* first;
};


#endif //TAREA_1_EC_DATOS_II_LINKEDLIST_H
