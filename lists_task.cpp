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
    int count = 0;

    if (pos != 0) {

        while (crnt != nullptr) {
            crnt = crnt -> next;
            count += 1;
        }
        count += 1;
        crnt = list;


        if (pos > count + 1) {
            delete(new_el);
            return list;

        }
        else {
            for (int i = 0; i < pos - 2; i++) {
                crnt = crnt -> next;
            }
            if (crnt != nullptr) {
                new_el -> next = crnt -> next;
                crnt -> next = new_el;

            }
            else {
                crnt -> next = new_el;
            }
            return list;
        }
    }
    
    else {
        new_el -> next = list;
        return new_el;
    }
    
}

Item* delete_el(Item* list, int pos) {

    Item* crnt = list;
    Item* prev;
    int count = 0;
    while (crnt != nullptr) {
            crnt = crnt -> next;
            count += 1;
        }
    count += 1;
    crnt = list;

    if (pos > count) {
        return list;
    }
    else {
        if (pos != 1) {
            for (int i = 0; i < pos - 1; i++) {
                prev = crnt;
                crnt = crnt -> next;
            }
            prev -> next = crnt -> next;
            delete (crnt);
            return list;
        }
        else {
            crnt = list -> next;
            delete(list);
            return crnt;
        }
    }


}


int main(int argc, char** argv) {

    srand(time(NULL));
    int count = 1 + rand()%21;

    Item* list = create(1 + rand()%21);
    print(list);

    list = insert_el(list, rand(), 1 + rand()%21);
    print(list);

    list = delete_el(list, 1 + rand()%21);
    print(list);

    free(list);

}