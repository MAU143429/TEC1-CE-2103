//
// Created by mau14 on 7/3/21.
//

#include "Collector.h"
using namespace std;

Collector* Collector::unique_instance = NULL;

Collector::Collector(void) {
}

Collector::~Collector(void) {

}

/**
 * Permite visualizar las direcciones de memoria de los punteros que pueden ser reciclados
 */
void Collector::visualizar() {
    Node *aux = first;
    if (this->first == nullptr){
        cout << "\nCollector no tiene espacios en memoria disponibles\n\n";
    }else{
        cout << "\nLas direcciones de memoria presentes en Collector son: " << endl;
        while(aux!= nullptr) {
            cout << static_cast<void*>(aux) << "\n";
            aux = aux->get_Siguiente();
        }
    }
}
/**
 * Verifica si la lista del collector tiene algun puntero y lo retorna, de lo contrario retorna nullptr
 * @return puntero disponible para su reciclaje o nullptr si no existe alguno
 */
void* Collector::NuevoNodo() { // RETORNA PUNTERO PARA RECICLAR
    if(this->first!= nullptr){
        Node* aux = this->first;
        this->set_first(first->get_Siguiente());
        aux->set_Siguiente(nullptr);
        return aux;
    }else{
        return nullptr;
    }
}
/**
 * Recibe un puntero para ingresarlo a la lista del Collector y posteriormente reciclarlo
 * @param nodo puntero disponible para el proceso de reciclaje
 */
void Collector::ReciclarNodo(Node* nodo) { //RECIBE PUNTERO PARA ALMACENAR EN LISTA
    nodo->set_Siguiente(this->get_first());
    this->set_first(nodo);
}

void Collector::set_first(Node *nodo){
    this->first = nodo;
}

Node* Collector::get_first(){
    return this->first;
}