#include <iostream>

using namespace std;

struct Item {
    int data;
    Item* next;
};

int print(Item* head) {
    Item* curr;
    curr = head;
    while (curr != nullptr) {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    cout << endl;
    return 0;
}

int main(int argc, char** argv) {
    Item *head = nullptr;
    Item *prev = nullptr;

    srand(time(NULL));
    int count = 1 + rand()%21;

    for (int i = 0; i < count; i++) {

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
    print(head);

}