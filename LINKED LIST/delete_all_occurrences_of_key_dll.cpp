 Node* deleteTargetNodes(Node* head,int target){
        Node* curr=head;
        while(curr!=nullptr){
            Node* nextnode=curr->next;
            if(curr->data==target){
                if(curr->prev) curr->prev->next=curr->next;
                else head=curr->next;
                if(curr->next) curr->next->prev=curr->prev;
                delete curr;
            }
            curr=nextnode;
        }
        return head;
    }
