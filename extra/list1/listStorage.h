
class listStorage {
    private:
        struct Item {
            int data;
            Item* next;
        };
        Item* head;

    public: 
        listStorage();
        ~listStorage();
        void print();
        void insert(int data, int pos);
        void remove(int pos);
        void reverse();
    

};