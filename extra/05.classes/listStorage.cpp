#include "listStorage.h"
#include <iostream>


listStorage::listStorage() {
    head = nullptr;
}

listStorage::~listStorage() {
    Item* prev = head;

    while (head != nullptr) {
        head = head -> next;
        delete prev;
        prev = head;
    }
}
    
void listStorage::print() {
    Item* curr;
    curr = head;
    while (curr != nullptr) {
        std::cout << curr -> data << " ";
        curr = curr -> next;
    }
    std::cout << std::endl;

}

void listStorage::insert(int pos, int data) {
    Item *crnt;
    crnt = head;
    Item *new_el = new Item();
    new_el -> data = data;
    new_el -> next = nullptr;

    if (pos <=0) {
        new_el -> next = head;
        head = new_el;
        return;
    }

    for (int i = 0; i < pos - 1; i ++) {
        if (crnt -> next == nullptr) 
            break;
        crnt = crnt -> next;
    }
    
    new_el -> next = crnt -> next;
    crnt -> next = new_el;
}

void listStorage::remove(int pos) {
    Item* crnt = head;
    Item* prev;
    int count = 0;

    if (pos <= 1) {
        crnt = head -> next;
        delete(head);
        head = crnt;
        return;
    }

    for (int i = 0; i < pos - 1; i++) {
        prev = crnt;
        crnt = crnt -> next;
        if (crnt -> next == nullptr) 
            break;
    }

    prev -> next = crnt -> next;
    delete crnt;
}

void listStorage::reverse() {
    Item* crnt;
    Item* prev = nullptr;

    while (head -> next != nullptr) {
        crnt = head -> next;
        head -> next = prev;
        prev = head;
        head = crnt;
    }
    crnt = head -> next;
    head -> next = prev; 
}