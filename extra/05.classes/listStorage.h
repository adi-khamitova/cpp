class listStorage {
    private:
        struct Item {
            int data;
            Item* next;
        };
        Item* head;
        int list_size;

    public: 
        listStorage();
        ~listStorage();
        void print();
        void insert(int pos, int data);
        bool get(int pos, int &data);
        void remove(int pos);
        void reverse();
        int size();
    
};