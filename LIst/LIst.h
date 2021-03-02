//
// Created by mau14 on 2/3/21.
//

#ifndef TAREA_1_EC_DATOS_II_LIST_H
#define TAREA_1_EC_DATOS_II_LIST_H


#include "../Node/Node.h"

class List {
public:
    int len;
    Node *head;

    int getLen() const;

    void setLen(int len);

    Node *getHead() const;

    void setHead(Node *head);
};



#endif //TAREA_1_EC_DATOS_II_LIST_H
