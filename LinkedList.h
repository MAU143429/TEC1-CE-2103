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
    void insert_inicio(int dato);
    void eliminar_nodofinal();
    void visualizar();

private:
    Node* first;
};


#endif //TAREA_1_EC_DATOS_II_LINKEDLIST_H
