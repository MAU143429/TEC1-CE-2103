//
// Created by mau14 on 7/3/21.
//

#ifndef TAREA_1_EC_DATOS_II_COLLECTOR_H
#define TAREA_1_EC_DATOS_II_COLLECTOR_H

#include "LinkedList.h"
#include "Node.h"

class Collector {
private:
    Node* first;
    Collector();
    static Collector* unique_instance;

public:
    ~ Collector();
    void* NewNode (); // RETORNA PUNTERO PARA RECICLAR
    void SaveNode (Node* node); //RECIBE PUNTERO PARA ALMACENAR EN LISTA
    void set_first(Node *node);
    Node* get_first();
    void print();
    static Collector *getInstance(){
        if(unique_instance == NULL){
            unique_instance = new Collector();
        }
        return unique_instance;
    };
};


#endif //TAREA_1_EC_DATOS_II_COLLECTOR_H
