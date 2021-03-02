//
// Created by mau14 on 2/3/21.
//

#ifndef TAREA_1_EC_DATOS_II_SIMPLYLL_H
#define TAREA_1_EC_DATOS_II_SIMPLYLL_H


#include "../Node/Node.h"

class SLL {
public:
    Node *head;
    Node *tail;
    int len;

    void append(int element);

    void show() const;
};


#endif //TAREA_1_EC_DATOS_II_SIMPLYLL_H
