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
    void Limpiar (); //
    void* NuevoNodo (); // RETORNA PUNTERO PARA RECICLAR
    void ReciclarNodo (Node* nodo); //RECIBE PUNTERO PARA ALMACENAR EN LISTA
    void set_first(Node *nodo);
    Node* get_first();
    void visualizar();
    static Collector *getInstance(){
        if(unique_instance == NULL){
            unique_instance = new Collector();
        }
        return unique_instance;
    };
};


#endif //TAREA_1_EC_DATOS_II_COLLECTOR_H
