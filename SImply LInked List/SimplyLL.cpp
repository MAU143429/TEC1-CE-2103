//
// Created by mau14 on 2/3/21.
//

#include "SimplyLL.h"
using namespace std;

/**
 * Method used for adding an element to the end of the list.
 * @param element: Type int object
 */
void SLL::append(int element) {
    Node *newElement;
    newElement = (new Node(element));
    if (this->head == nullptr) {
        this->head = this->tail = newElement;
    } else {
        this->tail->setNext(newElement);
        this->tail = newElement;
    }
    this->len += 1;
    cout << "Added : " << newElement->getValue() << " to the list on pos: " << len - 1 << "\n";
}

/**
 * Method for showing the list on the console.
 */
void SLL::show() const {
    if (this->head == nullptr) {
        cout << "[]";
    } else {
        cout << "[ ";
        Node *tmp = this->head;
        for (int i = 0; i < (this->len - 1); ++i) {
            cout << tmp->getValue() << ", ";
            tmp = tmp->getNext();
        }
        cout << tmp->getValue() << " ]";
    }
}