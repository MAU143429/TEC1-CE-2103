//
// Created by mau14 on 7/3/21.
//

#include "Node.h"
#include<iostream>
#include "Collector.h"
using namespace std;


Node::Node() {
}
/**
 * Operador new sobrecargado que permite administrar la memoria mediante los procesos de reciclaje de punteros del Collector
 * @param size tamano del espacio que se reservara en memoria
 * @return puntero a la direccion de memoria donde se colocara nuevo nodo
 */
void* Node::operator new(size_t size) {
    void* espacioMemoria;
    Collector::getInstance()->visualizar();
    espacioMemoria = Collector::getInstance()->NuevoNodo();

    if (espacioMemoria == nullptr){
        Node * p = ::new Node();
        cout<< "\nNodo creado con nueva direccion: " << static_cast<void*>(p) << endl;
        return p;
    } else {

        cout<< "\nNodo creado reutilizando direccion: " << static_cast<void*>(espacioMemoria) << endl;
        return espacioMemoria;
    }
}
/**
 * Elimina nodo de la lista y envia el puntero al Collector para su reciclaje
 * @param p puntero por reciclar
 */
void Node::operator delete(void * p)
{
    Collector::getInstance()->ReciclarNodo((Node*) p);
    cout<< "\nNodo " << static_cast<void*>(p) << " eliminado de lista y agregado a Collector\n" << endl;
}

void Node::set_Siguiente(Node *a) {
    this->next = a;
}

void Node::set_Dato(int dato) {
    this->data = dato;
}

Node* Node::get_Siguiente() {
    return this->next;
}
int Node::get_Dato() {
    return this->data;
}