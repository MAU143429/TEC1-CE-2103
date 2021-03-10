#include <iostream>
#include "LinkedList.h"


int main() {
    LinkedList L;
    L.append(2);
    L.append(3);
    L.append(4);
    L.delete_node();
    L.append(18);
    L.append(19);
    L.delete_node();
    L.append(17);
    L.delete_node();


    return 0;
}


