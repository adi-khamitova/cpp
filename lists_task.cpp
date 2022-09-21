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

int main(int argc, char** argv) {

    srand(time(NULL));
    Item* list = create(1 + rand()%21);
    print(list);
    free(list);

}