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
/**>
 * @brief This method show a memory available to recycling
 * @author Mauricio Calderon Chavarria
 */
void Collector::print() {
    Node *aux = first;
    if (this->first == nullptr){
        cout << "\nNo reusable memory available\n";
    }else{
        cout << "\nMemory available:" << endl;
        while(aux!= nullptr) {
            cout << static_cast<void*>(aux) << "\n";
            aux = aux->get_Next();
        }
    }
}
/**>
 * @brief this method search memory address available in collector
 * @return aux is a memory address available on the collector, if the list is empty the method return a null pointer
 * @author Mauricio Calderon Chavarria
 */
void* Collector::NewNode() {

    if(this->first!= nullptr){
        Node* aux = this->first;
        this->set_first(first->get_Next());
        aux->set_Next(nullptr);
        return aux;
    }else{
        return nullptr;
    }

}
/**
 * @brief this method receives a node to recycle its memory address, these memory addresses are saved in the collector list
 * @param node this is the param that you want to save in the collector list
 * @author Mauricio Calderon Chavarria
 */
void Collector::SaveNode(Node* node) {

    Node *auxsave = first;

    if(this->first == nullptr){
        this->set_first(node);
    }else{
        while (auxsave->get_Next()->get_Next() != nullptr){
            auxsave = auxsave->get_Next();
        }
        auxsave->get_Next()->set_Next(node);
    };
}

void Collector::set_first(Node *node){
    this->first = node;
}

Node* Collector::get_first(){
    return this->first;
}