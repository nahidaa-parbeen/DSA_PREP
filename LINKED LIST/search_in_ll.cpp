struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};
class Solution {
public:
    bool searchValue(Node* head, int key) {
        Node* current = head;
        while (current != NULL) {
            if (current->data == key) {
                return true;
            }
            current = current->next;
        }
        return false;
    }
};
