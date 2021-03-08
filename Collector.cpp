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
void Collector::SaveNode(Node* node) {
    node->set_Next(this->get_first());
    this->set_first(node);
}

void Collector::set_first(Node *node){
    this->first = node;
}

Node* Collector::get_first(){
    return this->first;
}