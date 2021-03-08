//
// Created by mau14 on 7/3/21.
//

#include "Node.h"
#include<iostream>
#include "Collector.h"
using namespace std;


Node::Node() {
}
void* Node::operator new(size_t size) {
    void* newMemory;
    Collector::getInstance()->print();
    newMemory = Collector::getInstance()->NewNode();

    if (newMemory == nullptr){
        Node * temp2 = ::new Node();
        cout<< "\nNew Node in: " << static_cast<void*>(temp2) << endl;
        return temp2;
    } else {

        cout<< "\nNew node reusable in: " << static_cast<void*>(newMemory) << endl;
        return newMemory;
    }
}

void Node::operator delete(void * temp2)
{
    Collector::getInstance()->SaveNode((Node*) temp2);
    cout<< "\nNode deleted\n" << endl;
}

void Node::set_Next(Node *temp) {
    this->next = temp;
}

void Node::set_Data(int data) {
    this->data = data;
}

Node* Node::get_Next(){
    return this->next;
}
int Node::get_Data() {
    return this->data;
}