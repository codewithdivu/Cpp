Node* deleteDuplicates(Node* head){
        if(head == NULL) return NULL;
        unordered_set<int>seen;
        
        Node* curr = head;
        Node* prev = NULL;
        
        while(curr!=NULL){
            if(seen.find(curr->data) != seen.end()){
                prev->next = curr->next;
                delete(curr);
                curr = prev->next;
            }else{
                seen.insert(curr->data);
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
