#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = nullptr;
    }
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode; 
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }
    void print() {
        Node* temp = head;
        while (temp) {
            cout << temp->data;
            if (temp->next) cout << " -> ";
            temp = temp->next;
        }
        cout << " -> NULL\n";
    }
};
class Solution {
public:
    void sortZeroOneTwo(LinkedList& ll) {
      Node* zeroDummy=new Node(-1);
      Node* oneDummy=new Node(-1);
      Node* twoDummy=new Node(-1);
      Node* zeroTail=zeroDummy;
      Node* oneTail=oneDummy;
      Node* twoTail=twoDummy;
      Node* curr=ll.head;
      while(curr){
        if(curr->data==0){
            zeroTail->next=curr;
            zeroTail=zeroTail->next;
        }
        else if(curr->data==1){
            oneTail->next=curr;
            oneTail=oneTail->next;
        }
        else{
            twoTail->next=curr;
            twoTail=twoTail->next;
        }
        curr=curr->next;
      }
      zeroTail->next=oneDummy->next?oneDummy->next:twoDummy->next;
      oneTail->next=twoDummy->next;
      twoTail->next=nullptr;
        ll.head = zeroDummy->next;
        delete zeroDummy;
        delete oneDummy;
        delete twoDummy;
    }
};

int main() {
    LinkedList ll;
    Solution sol;

    ll.insert(1);
    ll.insert(2);
    ll.insert(0);
    ll.insert(1);
    ll.insert(2);
    ll.insert(0);

    cout << "Original List:\n";
    ll.print();
    sol.sortZeroOneTwo(ll);

    cout << "Sorted List:\n";
    ll.print();

    return 0;
}
