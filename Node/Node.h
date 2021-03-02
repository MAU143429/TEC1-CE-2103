//
// Created by mau14 on 2/3/21.
//

#ifndef TAREA_1_EC_DATOS_II_NODE_H
#define TAREA_1_EC_DATOS_II_NODE_H

#include "string"
#include <cstdio>
#include "iostream"


class Node {
public:
    Node(int value);

    int value;
    Node *next;

    int getValue() const;

    void setValue(int value);

    Node *getNext() const;

    void setNext(Node *next);
};

#endif //TAREA_1_EC_DATOS_II_NODE_H
