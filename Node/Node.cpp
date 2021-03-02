//
// Created by mau14 on 2/3/21.
//

#include "iostream"
#include "Node.h"

using namespace std;

/**
 * Get for the value stored in the node.
 * @return Integer object.
 */
int Node::getValue() const {
    return value;
}

/***
 * Method for storing a new value on the node.
 * @param value: Integer object.
 */
void Node::setValue(int value) {
    Node::value = value;
}

/**
 * Get for the pointer stored in the node, pointing to the next node in the list.
 * @return Pointer to next, nullptr if none.
 */
Node *Node::getNext() const {
    return next;
}

/**
 * Set for the next pointer.
 * @param next: pointer to a node.
 */
void Node::setNext(Node *next) {
    Node::next = next;
}

/**
 * Constructor for the node.
 * @param value: Integer value thats going to be stored in the node.
 */
Node::Node(int value) {
    this->value = value;
    this->next = NULL;

}