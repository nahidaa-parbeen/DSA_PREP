class Node{
    public:
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
    }
    Node(int data){
        data=data1;
        next=nullptr;
    }
};
class Solution{
    public:
    Node* insertathead(Node* head,int newdata){
        Node* newnode=new Node(newdata,head);
        return newnode;
    }
    void printlist(Node* head){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
    
int main() {
    Solution sol;
    Node* head = new Node(2);
    head->next = new Node(3);
    cout << "Original List: ";
    sol.printList(head);
    head = sol.insertAtHead(head, 1);
    cout << "After Insertion at Head: ";
    sol.printList(head);
    return 0;
}
