#include "listStorage.h"
#include <iostream>


listStorage::listStorage() {
    head = nullptr;
    list_size = 0;
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
        list_size++;
        return;
    }

    for (int i = 0; i < pos - 1; i ++) {
        if (crnt -> next == nullptr) 
            break;
        crnt = crnt -> next;
    }
    
    new_el -> next = crnt -> next;
    crnt -> next = new_el;
    list_size++;
}

void listStorage::remove(int pos) {
    Item* crnt = head;
    Item* prev;
    int count = 0;

    if (pos <= 1) {
        crnt = head -> next;
        delete(head);
        head = crnt;
        list_size--;
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
    list_size--;
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

int listStorage::size() {
    return list_size;
}

bool listStorage::get(int pos, int &data) {
    if (pos >= list_size) 
        return false;
    Item* crnt = head;
    for (int i = 0; i < pos; i++) {
        crnt = crnt -> next;
    }
    data = crnt -> data;
    return true;
}