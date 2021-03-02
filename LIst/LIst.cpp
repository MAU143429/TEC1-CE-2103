//
// Created by mau14 on 2/3/21.
//

#include "LIst.h"

int List::getLen() const {
    return len;
}

void List::setLen(int len) {
    List::len = len;
}

Node *List::getHead() const {
    return head;
}

void List::setHead(Node *head) {
    List::head = head;
}