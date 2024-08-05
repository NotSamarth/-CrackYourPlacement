class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
       std::vector<int> a;
        std::vector<int> b;
        long long diga = 0; // Initialize the variable
        long long digb = 0; // Initialize the variable
        
        // Convert the first linked list to a number
        while (first) {
            a.push_back(first->data);
            first = first->next;
        }
        
        // Convert the second linked list to a number
        while (second) {
            b.push_back(second->data);
            second = second->next;
        }
        // Compute the number from the first list
        for (int i = 0; i < a.size() ; i++) {
            diga = diga * 10 + a[i];
           
        }
        
        // Compute the number from the second list
        for (int i = 0; i < b.size() ; i++) {
            digb = digb * 10 + b[i];
        }

        // Return the product of the two numbers
        return diga * digb;
    }
};