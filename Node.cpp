//
// Created by mau14 on 7/3/21.
//

#include "Node.h"
#include<iostream>
#include "Collector.h"
using namespace std;

Node::Node() {
}
/**>
 * @brief The operator new allow to create a new node in a new or reusable space of memory
 * @param size this param establish the size of the element
 * @return temp2 is a node created
 * @author Mauricio Calderon
 */
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
/**>
 * @brief This operator receive a node to delete it, previously the method save the direction of memory in the list of collector to recycle it.
 * @param temp2 this param is node to be removed
 * @author Mauricio Calderon
 */
void Node::operator delete(void * temp2)
{
    Collector::getInstance()->SaveNode((Node*) temp2);
    cout<< "\nNode deleted\n" << endl;
}

void Node::set_Next(Node *temp) {
    this->next = temp;
}

Node* Node::get_Next(){
    return this->next;
}

void Node::set_Data(int data) {
    this->data = data;
}

int Node::get_Data() {
    return this->data;
}