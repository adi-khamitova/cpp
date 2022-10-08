#include <iostream>
using namespace std;
class listStorage {
    public: 
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
                delete prev;
                prev = list;
            }
        }

        Item* insert_el(Item* list, int new_data, int pos) {

            Item *crnt;
            crnt = list;
            Item *new_el = new Item();
            new_el -> data = new_data;
            new_el -> next = nullptr;



            if (pos ==0) {
                new_el -> next = list;
                return new_el;

            }

            for (int i = 0; i < pos - 1; i ++) {
                if (crnt -> next == nullptr) break;
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

            if (pos <= 1) {
                crnt = list -> next;
                delete(list);
                return crnt;
            }

            for (int i = 0; i < pos - 1; i++) {
                prev = crnt;
                crnt = crnt -> next;
                if (crnt -> next == nullptr) break;
            }

            prev -> next = crnt -> next;
            delete crnt;
            return list;
            
        }

        Item* reverse(Item* list) {
            Item* crnt;
            Item* prev = nullptr;

            while (list -> next != nullptr) {
                crnt = list -> next;
                list -> next = prev;
                prev = list;
                list = crnt;
            }
            crnt = list -> next;
            list -> next = prev;
            return list;
        }

};