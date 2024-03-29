//
// Created by mau14 on 7/3/21.
//

#include "LinkedList.h"
#include <iostream>
#include "Node.h"

using namespace std;
LinkedList::LinkedList() {

    first = nullptr;

}
LinkedList::~LinkedList(){

}

/**>
 * @brief this method allow to create and append a new element in the main list
 * @param temp is the value of the new element
 * @author Mauricio Calderon Chavarria
 */
void LinkedList::append(int temp) {
    size_t size = 2;
    Node *n_node = new Node();
    n_node->set_Data(temp);
    if (first == nullptr){
        first = n_node;
    } else {
        n_node->set_Next(first);
        first = n_node;
    }
    this->print();
}
/**>
 * @brief this method allow to show a list in the console
 * @author Mauricio Calderon Chavarria
 */
void LinkedList::print() {
    Node *aux = first;
    if (this->first == nullptr){
        cout << "\nThe list is empty\n" << endl;
        cout << "[ ]\n" << endl;
    }else{
        cout << "\n[";

        while(aux != nullptr) {
            if(aux->get_Next() == nullptr){
                cout << aux->get_Data();
                aux = aux->get_Next();
            }else{
                cout << aux->get_Data() <<",";
                aux = aux->get_Next();
            }

        }
        cout << "]\n";
    }
}
/**>
 * @brief the method delete one node for the main list, before the delete it, other method save the memory address of the node
 * @author Mauricio Calderon Chavarria
 */
void LinkedList::delete_node() {

    Node *aux = this->first;
    if (aux == nullptr) {
        cout << "The list is empty" << endl;
    } else {
        if (aux->get_Next() == nullptr) {
            delete this->first;
            this->first = nullptr;
        } else {
            while (aux->get_Next()->get_Next() != nullptr) {
                aux = aux->get_Next();
            }
            delete aux->get_Next();
            aux->set_Next(nullptr);
        }
    }
    this->print();
}