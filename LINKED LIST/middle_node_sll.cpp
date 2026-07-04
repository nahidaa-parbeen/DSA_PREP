----------------------------------BRUTE-FORCE---------------------------------------

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
     Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
Node* findMiddle(Node* head){
    if(head==nullptr || head->next==nullptr) return head;
    Node* temp=head;
    int cnt=0;
    while(temp!=nullptr){
        cnt++;
        temp=temp->next;
    }
    int mid=cnt/2+1;
    temp=head;
    while(temp!=nullptr){
        mid--;
        if(mid==0) break;
        temp=temp->next;
    }
    return temp;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(41);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    Node* middleNode = findMiddle(head);
    cout << "The middle node value is: " << middleNode->data << endl;
    return 0;
}



----------------------------------OPTIMAL-------------------------------------------------

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
