#include <iostream>

using namespace std;

struct Item {
    int data;
    Item* next;
};

void print(Item* head) {
    Item* curr;
    curr = head;
    while (curr != nullptr) {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    cout << endl;
}

Item *create(int size) {
    Item *head = nullptr;
    Item *prev = nullptr;

    for (int i = 0; i < size; i++) {

        Item *crnt = new Item();
        crnt -> data = i;
        crnt -> next = nullptr;

        if (head == nullptr) {
            head = crnt;
        }

        if (prev != nullptr) {
            prev -> next = crnt;
        }

        prev = crnt;
    }
    return head;
    

}

void free(Item* list) {
    Item* prev = list;

    while (list != nullptr) {
        list = list -> next;
        delete(prev);
        prev = list;
    }
}

Item* insert_el(Item* list, int new_data, int pos) {

    Item *crnt;
    crnt = list;
    Item *new_el = new Item();
    new_el -> data = new_data;
    new_el -> next = nullptr;



    if (pos == 0) {
        new_el -> next = list;
        return new_el;

    }

    for (int i = 0; i < pos - 2; i ++) {
        crnt = crnt -> next;
    }
    
    new_el -> next = crnt -> next;
    crnt -> next = new_el;
    return list;
 
    
}

Item* delete_el(Item* list, int pos) {

    Item* crnt = list;
    Item* prev;
    int count = 0;

    if (pos == 1) {
        crnt = list -> next;
        delete(list);
        return crnt;
    }

    for (int i = 0; i < pos - 1; i++) {
        prev = crnt;
        crnt = crnt -> next;
    }

    prev -> next = crnt -> next;
    delete (crnt);
    return list;
       


}


int main(int argc, char** argv) {

    srand(time(NULL));
    int count = 1 + rand()%21;

    Item* list = create(count);
    print(list);

    int pos = 1 + rand()%21;
    if (pos > count + 1) {
        pos = count;
    }
    list = insert_el(list, rand(), pos);
    print(list);

    pos = 1 + rand()%22;
    
    if (pos > count + 1) {
        pos = count + 1;
    }
    
    list = delete_el(list, pos);
    print(list);

    free(list);

}